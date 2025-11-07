// QUESTÃO 1 - Exibir a soma dos números positivos no intervalo de 1 a 100
#include <stdio.h>
int main() {
    int i, soma = 0;
    for(i = 1; i <= 100; i++) {
        soma += i;
    }
    printf("A soma dos numeros de 1 a 100 eh: %d\n", soma);
    return 0;
}

