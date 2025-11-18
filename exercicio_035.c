#include <stdio.h>
#include <string.h>

int main(){
    char nome[200];
    int i, pos = -1;

    printf("Nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    for(i=0; nome[i]; i++){
        if(nome[i] == ' ')
            pos = i;
        if(nome[i] == '\n')
            nome[i] = 0;
    }

    if(pos != -1)
        printf("Sobrenome: %s\n", nome + pos + 1);
    else
        printf("Sobrenome: %s\n", nome);

    return 0;
}
