   
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char s[400], c;
    printf("Digite frase: "); fgets(s,sizeof s,stdin); s[strcspn(s,"\n")]=0;
    printf("Caractere para substituir por '*': "); c=getchar();
    for(int i=0;s[i];i++) if(s[i]==c) s[i]='*';
    printf("Resultado: %s\n", s);
    return 0;
}
