#include <stdio.h>

int main() {
    printf("Resumo importante sobre strings em C:\n");
    printf("- strcpy(s, t) copia o CONTEUDO de t para s.\n");
    printf("- Ja fazer s = t nao copia o texto, apenas faz s apontar para o mesmo endereco.\n");
    printf("  (Em C, arrays nao podem ser atribuídos diretamente dessa forma.)\n");
    return 0;
}
