#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void decodificar(char *texto){
    int i;

    for(i = 0; texto[i] != '\0'; i++){
        if(isalpha((unsigned char) texto[i])){
            texto[i] = texto[i] - 3;
        }
    }
}

int main(){
    char texto[300];

    printf("Digite o texto codificado: ");
    fgets(texto, sizeof(texto), stdin);

    // remover o \n final se existir
    texto[strcspn(texto, "\n")] = '\0';

    decodificar(texto);

    printf("Descriptografado: %s\n", texto);

    return 0;
}
