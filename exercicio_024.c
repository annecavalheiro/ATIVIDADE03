

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char a[300], b[300];
    printf("Primeira frase: "); fgets(a,sizeof a,stdin); a[strcspn(a,"\n")]=0;
    printf("Segunda frase: "); fgets(b,sizeof b,stdin); b[strcspn(b,"\n")]=0;
    int igual = (strlen(a)==strlen(b) && strcmp(a,b)==0);
    printf("Sao iguais? %s\n", igual ? "Sim" : "Nao");
    return 0;
}
