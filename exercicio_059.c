#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char texto[300];
    int i;

    printf("Digite a string: ");
    fgets(texto, sizeof(texto), stdin);

    // Converte letras minusculas em maiusculas
    for(i = 0; texto[i] != '\0'; i++){
        if(islower((unsigned char) texto[i])){
            texto[i] = toupper((unsigned char) texto[i]);
        }
    }

    printf("Convertida: %s\n", texto);

    return 0;
}
