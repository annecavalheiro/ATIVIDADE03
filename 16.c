// QUESTÃO 16 - Verificar se um número é primo
#include <stdio.h>
int main() {
    int n, i, cont = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        if(n % i == 0)
            cont++;
    }
    if(cont == 2)
        printf("%d eh primo\n", n);
    else
        printf("%d nao eh primo\n", n);
    return 0;
}
