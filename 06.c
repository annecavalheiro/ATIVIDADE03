// QUESTÃO 6 - Ler idades até digitar -1 e calcular média
#include <stdio.h>
int main() {
    int idade, soma = 0, cont = 0;
    printf("Digite as idades (-1 para encerrar):\n");
    while(1) {
        scanf("%d", &idade);
        if(idade == -1)
            break;
        soma += idade;
        cont++;
    }
    if(cont > 0)
        printf("Media das idades: %.2f\n", soma / (float)cont);
    else
        printf("Nenhuma idade informada.\n");
    return 0;
}
