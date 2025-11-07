// QUESTÃO 5 - Ler 20 idades e calcular a média
#include <stdio.h>
int main() {
    int i, idade, soma = 0;
    for(i = 1; i <= 20; i++) {
        printf("Digite a idade %d: ", i);
        scanf("%d", &idade);
        soma += idade;
    }
    printf("Idade media: %.2f\n", soma / 20.0);
    return 0;
}
