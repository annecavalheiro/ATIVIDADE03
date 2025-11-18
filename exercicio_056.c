#include <stdio.h>

int main() {
    char bin[200];
    unsigned long valor = 0;

    printf("Digite um numero em binario: ");
    fgets(bin, sizeof(bin), stdin);

    for (int i = 0; bin[i] != '\0' && bin[i] != '\n'; i++) {
        valor = valor * 2 + (bin[i] - '0');
    }

    printf("Valor decimal: %lu\n", valor);

    return 0;
}
