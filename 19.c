// QUESTÃO 19 - Números de 4 dígitos com a característica 30+25=55 e 55²=3025
#include <stdio.h>
int main() {
    int n, a, b, soma;
    for(n = 1000; n <= 9999; n++) {
        a = n / 100;
        b = n % 100;
        soma = a + b;
        if(soma * soma == n)
            printf("%d\n", n);
    }
    return 0;
}
