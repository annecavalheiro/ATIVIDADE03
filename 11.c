// QUESTÃO 11 - Calcular o fatorial de um número N
#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fat = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        fat *= i;
    }
    printf("Fatorial de %d = %llu\n", n, fat);
    return 0;
}
