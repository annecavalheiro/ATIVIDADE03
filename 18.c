// QUESTÃO 18 - Números de 4 dígitos cuja raiz quadrada é a soma das dezenas
#include <stdio.h>
#include <math.h>
int main() {
    int n, p1, p2;
    for(n = 1000; n <= 9999; n++) {
        p1 = n / 100;
        p2 = n % 100;
        if(sqrt(n) == p1 + p2)
            printf("%d\n", n);
    }
    return 0;
}
