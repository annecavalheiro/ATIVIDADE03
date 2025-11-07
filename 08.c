// QUESTÃO 8 - Ler sexo e altura de 50 pessoas e calcular a média de altura das mulheres
#include <stdio.h>
int main() {
    int i, contF = 0;
    char sexo;
    float altura, somaF = 0;
    for(i = 1; i <= 50; i++) {
        printf("Pessoa %d\n", i);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Altura: ");
        scanf("%f", &altura);
        if(sexo == 'F' || sexo == 'f') {
            somaF += altura;
            contF++;
        }
    }
    if(contF > 0)
        printf("Altura media das mulheres: %.2f\n", somaF / contF);
    else
        printf("Nenhuma mulher informada.\n");
    return 0;
}

