// QUESTÃO 10 - Ler número inteiro N e imprimir na ordem inversa
#include <stdio.h>
int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Numero invertido: ");
    while(n > 0) {
        printf("%d", n % 10);
        n /= 10;
    }
    printf("\n");
    return 0;
}
