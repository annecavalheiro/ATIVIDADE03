#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int pos_char_a_partir(const char *texto, char caractere, int inicio){
    int i;
    for(i = inicio; texto[i] != '\0'; i++){
        if(texto[i] == caractere){
            return i;
        }
    }
    return -1;
}

int main(){
    char texto[200];
    char caractere;
    int inicio;
    int posicao;

    printf("Digite a string: ");
    fgets(texto, sizeof(texto), stdin);

    // remove o \n no final
    texto[strcspn(texto, "\n")] = '\0';

    printf("Digite o caractere a procurar: ");
    caractere = getchar();

    printf("Digite o indice inicial de busca: ");
    if(scanf("%d", &inicio) != 1){
        printf("Entrada inválida.\n");
        return 0;
    }

    posicao = pos_char_a_partir(texto, caractere, inicio);

    printf("Indice encontrado: %d\n", posicao);

    return 0;
}
