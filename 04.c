// QUESTÃO 4 - Ler dois valores, o segundo deve ser maior que o primeiro
#include <stdio.h>
int main() {
    int a, b;
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    do {
        printf("Digite o segundo valor (maior que %d): ", a);
        scanf("%d", &b);
    } while(b <= a);
    printf("Valores aceitos: %d e %d\n", a, b);
    return 0;
}
