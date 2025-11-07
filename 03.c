// QUESTÃO 3 - Somatório dos valores pares entre 1 e 500
#include <stdio.h>
int main() {
    int i, soma = 0;
    for(i = 2; i <= 500; i += 2) {
        soma += i;
    }
    printf("Soma dos pares entre 1 e 500: %d\n", soma);
    return 0;
}
