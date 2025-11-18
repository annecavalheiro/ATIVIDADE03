   

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char s[500], out[500]; int i=0,j=0;
    printf("Digite frase: "); fgets(s,sizeof s,stdin);
    for(i=0;s[i];i++){
        if(!(s[i]==' ' && s[i+1]==' ')) out[j++]=s[i];
    }
    out[j]=0;
    printf("Sem espacos extras: %s\n", out);
    return 0;
}
