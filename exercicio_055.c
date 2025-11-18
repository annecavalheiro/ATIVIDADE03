#include <stdio.h>

int main() {
    unsigned int num;
    char bin[65];
    int i = 0;

    printf("Digite um número inteiro positivo: ");
    if (scanf("%u", &num) != 1) {
        printf("Entrada inválida.\n");
        return 0;
    }

    if (num == 0) {
        printf("0\n");
        return 0;
    }

    while (num > 0) {
        bin[i] = (num % 2) + '0';
        num /= 2;
        i++;
    }

    // imprime ao contrário
    for (int j = i - 1; j >= 0; j--) {
        putchar(bin[j]);
    }
    putchar('\n');

    return 0;
}
