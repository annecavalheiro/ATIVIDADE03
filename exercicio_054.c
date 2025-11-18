#include <stdio.h>
#include <ctype.h>
#include <string.h>

int str_to_int(const char *texto) {
    int i = 0;
    int sinal = 1;
    int valor = 0;

    // Pulando espaços iniciais
    while (texto[i] != '\0' && isspace((unsigned char)texto[i])) {
        i++;
    }

    // Verifica sinal
    if (texto[i] == '-' || texto[i] == '+') {
        if (texto[i] == '-') {
            sinal = -1;
        }
        i++;
    }

    // Converte enquanto houver dígitos
    while (texto[i] != '\0' && isdigit((unsigned char)texto[i])) {
        valor = valor * 10 + (texto[i] - '0');
        i++;
    }

    return valor * sinal;
}

int main() {
    char entrada[200];

    printf("Digite um número: ");
    fgets(entrada, sizeof(entrada), stdin);

    int resultado = str_to_int(entrada);
    printf("Valor inteiro convertido: %d\n", resultado);

    return 0;
}
