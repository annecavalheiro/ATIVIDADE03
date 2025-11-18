 

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char frase[1000], palavra[100];
    printf("Digite frase: "); fgets(frase,sizeof frase,stdin); frase[strcspn(frase,"\n")]=0;
    printf("Digite palavra: "); fgets(palavra,sizeof palavra,stdin); palavra[strcspn(palavra,"\n")]=0;
    int count=0;
    char *p = frase;
    while((p = strstr(p, palavra))){ count++; p += 1; }
    printf("A palavra '%s' aparece %d vezes\n", palavra, count);
    return 0;
}
