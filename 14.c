// QUESTÃO 14 - Série de Ricci (como Fibonacci, mas com 2 primeiros termos definidos pelo usuário)
#include <stdio.h>
int main() {
    int n, a, b, i, c;
    printf("Digite o primeiro termo: ");
    scanf("%d", &a);
    printf("Digite o segundo termo: ");
    scanf("%d", &b);
    printf("Digite quantos termos deseja: ");
    scanf("%d", &n);
    printf("Serie de Ricci: %d %d ", a, b);
    for(i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}
