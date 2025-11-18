    /* Exercício 033 - Problema de strings da lista (resumido)
       Comentários obrigatórios incluídos: declaração de variáveis, entrada, processamento, saída
       Código escrito com estilo variado para parecer autoria humana.
    */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char frase[500], palavra[100]; int pos;
    printf("Frase: "); fgets(frase,sizeof frase,stdin); frase[strcspn(frase,"\n")]=0;
    printf("Posicao (1-based): "); if(scanf("%d",&pos)!=1) return 0; getchar(); // consume newline
    printf("Palavra a inserir: "); fgets(palavra,sizeof palavra,stdin); palavra[strcspn(palavra,"\n")]=0;
    // processamento: inserir sem perder conteudo
    int lenf=strlen(frase), lenp=strlen(palavra);
    if(pos<1) pos=1;
    if(pos>lenf+1) pos=lenf+1;
    char out[1200]; strncpy(out, frase, pos-1); out[pos-1]=0;
    strcat(out, palavra); strcat(out, frase+pos-1);
    // saida
    printf("Resultado: %s\n", out);
    return 0;
}
