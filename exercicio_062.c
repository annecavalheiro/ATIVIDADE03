#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char nome[200];
    char *primeiro = NULL;
    char *ultimo = NULL;
    char *parte;

    printf("Digite o nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    // remove o \n do final
    nome[strcspn(nome, "\n")] = '\0';

    // pega o primeiro elemento
    primeiro = strtok(nome, " ");
    parte = primeiro;

    // avança até o último token
    while(parte != NULL){
        ultimo = parte;
        parte = strtok(NULL, " ");
    }

    if(primeiro != NULL && ultimo != NULL){
        printf("%s, %s\n", ultimo, primeiro);
    } else {
        printf("Nome invalido ou muito curto.\n");
    }

    return 0;
}
