   
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char s[1000]; int words=0, inword=0;
    printf("Digite frase: "); fgets(s,sizeof s,stdin);
    for(int i=0;s[i];i++){
        if(!isspace((unsigned char)s[i]) && !inword){ words++; inword=1; }
        else if(isspace((unsigned char)s[i])) inword=0;
    }
    printf("Numero de palavras: %d\n", words);
    return 0;
}
