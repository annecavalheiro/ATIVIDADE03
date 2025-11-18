  

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char s[400]; int tudoMaius=1;
    printf("Digite frase: "); fgets(s,sizeof s,stdin);
    for(int i=0;s[i];i++) if(isalpha((unsigned char)s[i]) && !isupper((unsigned char)s[i])) { tudoMaius=0; break; }
    printf("Todos alfabeticos sao maiusculas? %s\n", tudoMaius ? "Sim":"Nao");
    return 0;
}
