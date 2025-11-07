// QUESTÃO 2 - Exibir o produto dos números inteiros positivos no intervalo de 1 a 100
#include <stdio.h>
int main() {
    int i;
    double produto = 1;
    for(i = 1; i <= 100; i++) {
        produto *= i;
    }
    printf("O produto dos numeros de 1 a 100 eh: %.0lf\n", produto);
    return 0;
}
