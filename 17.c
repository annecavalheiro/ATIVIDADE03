// QUESTÃO 17 - Verificar se um número é perfeito
#include <stdio.h>
int main() {
    int n, i, soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for(i = 1; i < n; i++) {
        if(n % i == 0)
            soma += i;
    }
    if(soma == n)
        printf("%d eh um numero perfeito\n", n);
    else
        printf("%d nao eh um numero perfeito\n", n);
    return 0;
}
