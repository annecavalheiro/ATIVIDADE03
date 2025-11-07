// QUESTÃO 7 - Ler alturas até digitar 0 e mostrar a menor altura
#include <stdio.h>
int main() {
    float altura, menor;
    int primeiro = 1;
    printf("Digite as alturas (0 para encerrar):\n");
    while(1) {
        scanf("%f", &altura);
        if(altura == 0)
            break;
        if(primeiro) {
            menor = altura;
            primeiro = 0;
        } else if(altura < menor) {
            menor = altura;
        }
    }
    if(primeiro)
        printf("Nenhuma altura informada.\n");
    else
        printf("A menor altura eh: %.2f\n", menor);
    return 0;
}
