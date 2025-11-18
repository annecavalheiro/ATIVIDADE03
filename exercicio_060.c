#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char primeira[41];
    char segunda[41];

    printf("Digite a primeira string: ");
    fgets(primeira, sizeof(primeira), stdin);

    printf("Digite a segunda string: ");
    fgets(segunda, sizeof(segunda), stdin);

    // Remover o \n do final, se existir
    primeira[strcspn(primeira, "\n")] = '\0';
    segunda[strcspn(segunda, "\n")] = '\0';

    // Concatena segunda no final de primeira
    strcat(primeira, segunda);

    printf("\nConcatenacao: %s\n", primeira);

    return 0;
}
