#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int posicao_substring(const char *substr, const char *texto){
    char *ptr = strstr(texto, substr);

    if(ptr != NULL){
        return (int)(ptr - texto);
    }

    return -1;
}

int main(){
    char texto[300];
    char busca[100];
    int pos;

    printf("Digite o texto: ");
    fgets(texto, sizeof(texto), stdin);

    printf("Digite a substring que deseja buscar: ");
    fgets(busca, sizeof(busca), stdin);

    // remove \n do final das strings
    texto[strcspn(texto, "\n")] = '\0';
    busca[strcspn(busca, "\n")] = '\0';

    pos = posicao_substring(busca, texto);

    printf("Posição encontrada: %d\n", pos);

    return 0;
}
