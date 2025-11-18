
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char s[300], t[300]; int i=0,j=0, ok=1;
    printf("Digite palavra: "); fgets(s,sizeof s,stdin); s[strcspn(s,"\n")]=0;
    // processamento: verificar palindromo
    int len = strlen(s);
    for(i=0;i<len/2;i++) if(tolower((unsigned char)s[i])!=tolower((unsigned char)s[len-1-i])) { ok=0; break; }
    printf("Palindromo? %s\n", ok ? "Sim" : "Nao");
    return 0;
}
