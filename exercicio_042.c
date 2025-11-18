#include <stdio.h>

int main() {
    printf("Dica importante sobre strings em C:\n");
    printf("- Use strcmp(s, t) para comparar o CONTEUDO das strings (ordem lexicografica).\n");
    printf("- Nao use s < t, pois isso compara apenas os ENDERECOS na memoria.\n");
    return 0;
}
