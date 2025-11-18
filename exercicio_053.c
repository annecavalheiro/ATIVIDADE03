#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>

char *int_to_str(int n) {
    char buffer[50];
    int indice = 0;
    int negativo = 0;

    // Caso especial: zero
    if (n == 0) {
        return strdup("0");
    }

    // Tratando sinal
    if (n < 0) {
        negativo = 1;

        // Caso especial para INT_MIN
        if (n == INT_MIN) {
            // Soma 1 antes de inverter, para evitar overflow
            n = -(n + 1);
        } else {
            n = -n;
        }
    }

    // Monta número ao contrário
    while (n > 0) {
        buffer[indice] = (n % 10) + '0';
        n /= 10;
        indice++;
    }

    // Se era INT_MIN, corrigimos o último dígito perdido
    if (negativo && buffer[0] == '7') {
        buffer[0] = '8';
    }

    // Se tinha sinal, adicionar
    if (negativo) {
        buffer[indice] = '-';
        indice++;
    }

    buffer[indice] = '\0';

    // Inverter string
    for (int i = 0, j = indice - 1; i < j; i++, j--) {
        char temp = buffer[i];
        buffer[i] = buffer[j];
        buffer[j] = temp;
    }

    return strdup(buffer);
}

int main() {
    int valor;
    printf("Digite um número inteiro: ");

    if (scanf("%d", &valor) != 1) {
        printf("Entrada inválida.\n");
        return 0;
    }

    char *texto = int_to_str(valor);
    printf("Convertido para string: %s\n", texto);

    free(texto);
    return 0;
}
