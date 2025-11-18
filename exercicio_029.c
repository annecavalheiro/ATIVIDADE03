
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char senha[20];
    printf("Digite senha (6 digitos): "); scanf("%19s", senha);
    if(strlen(senha)==6 && strcmp(senha,"123456")==0) printf("Acesso permitido\n"); else printf("Senha invalida\n");
    return 0;
}
