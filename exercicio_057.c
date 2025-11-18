#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void codificar(char *texto){
    int i;

    for(i = 0; texto[i] != '\0'; i++){
        if(isalpha((unsigned char) texto[i])){
            texto[i] = texto[i] + 3;  // desloca 3 posições na tabela ASCII
        }
    }
}

int main(){
    char texto[300];

    printf("Digite o texto: ");
    fgets(texto, sizeof(texto), stdin);

    // remove o \n final se existir
    texto[strcspn(texto, "\n")] = '\0';

    codificar(texto);

    printf("Codificado: %s\n", texto);

    return 0;
}
