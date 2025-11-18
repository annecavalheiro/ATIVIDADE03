
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *slice_sem_copiar(char *texto, int inicio, int tamanho){
    int tamTexto = strlen(texto);

    if(inicio >= tamTexto){
        return "";
    }

    texto[inicio + tamanho] = '\0';

    return texto + inicio;
}

char *slice_com_copia(const char *texto, int inicio, int tamanho){
    int tamTexto = strlen(texto);
    char *resultado;

    if(inicio >= tamTexto){
        resultado = malloc(1);
        if(resultado != NULL) resultado[0] = '\0';
        return resultado;
    }

    if(inicio + tamanho > tamTexto){
        tamanho = tamTexto - inicio;
    }

    resultado = malloc(tamanho + 1);

    if(resultado != NULL){
        strncpy(resultado, texto + inicio, tamanho);
        resultado[tamanho] = '\0';
    }

    return resultado;
}

int main(){
    printf("Funções de fatiamento de texto carregadas com sucesso.\n");
    return 0;
}
