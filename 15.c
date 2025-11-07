// QUESTÃO 15 - Série de Fetuccine (soma nos ímpares e subtração nos pares)
#include <stdio.h>
int main() {
    int n, a, b, i, c;
    printf("Digite os dois primeiros termos: ");
    scanf("%d %d", &a, &b);
    printf("Digite quantos termos deseja: ");
    scanf("%d", &n);
    printf("Serie de Fetuccine: %d %d ", a, b);
    for(i = 3; i <= n; i++) {
        if(i % 2 == 0)
            c = b - a;
        else
            c = b + a;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}
