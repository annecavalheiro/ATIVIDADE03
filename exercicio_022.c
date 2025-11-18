  
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char s[400]; int temNumero=0;
    printf("Digite frase: "); fgets(s,sizeof s,stdin);
    for(int i=0;s[i];i++) if(isdigit((unsigned char)s[i])) { temNumero=1; break; }
    printf("Existem numeros? %s\n", temNumero ? "Sim" : "Nao");
    return 0;
}
