// QUESTÃO 20 - Converter número decimal para binário
#include <stdio.h>
int main() {
    int n, bin[32], i = 0;
    printf("Digite um numero decimal: ");
    scanf("%d", &n);
    if(n == 0) {
        printf("0\n");
        return 0;
    }
    while(n > 0) {
        bin[i++] = n % 2;
        n /= 2;
    }
    printf("Binario: ");
    for(i = i - 1; i >= 0; i--)
        printf("%d", bin[i]);
    printf("\n");
    return 0;
}
