#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *dupstr(const char *texto) {
    char *copia = malloc(strlen(texto) + 1);

    if (copia != NULL) {
        strcpy(copia, texto);
    }

    return copia;
}

int main() {
    char entrada[200];
    char *resultado;

    printf("Digite alguma coisa: ");
    fgets(entrada, sizeof(entrada), stdin);

    // Remove o \n do final, se existir
    entrada[strcspn(entrada, "\n")] = '\0';

    resultado = dupstr(entrada);

    if (resultado != NULL) {
        printf("Copia: %s\n", resultado);
        free(resultado);
    } else {
        printf("Erro ao copiar a string!\n");
    }

    return 0;
}
