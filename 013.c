// QUESTÃO 13 - Série de Bergamacci (1 1 1 1 3 5 9 17 ...)
#include <stdio.h>
int main() {
    int n, i, a = 1, b = 1, c = 1, d;
    printf("Digite quantos termos deseja: ");
    scanf("%d", &n);
    printf("Serie de Bergamacci: %d %d %d ", a, b, c);
    for(i = 4; i <= n; i++) {
        d = a + b + c;
        printf("%d ", d);
        a = b;
        b = c;
        c = d;
    }
    printf("\n");
    return 0;
}
