   
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char s[300]; int ok=1;
    printf("Digite cadeia (bits): "); fgets(s,sizeof s,stdin);
    for(int i=0;s[i] && s[i]!='\n';i++) if(s[i]!='0' && s[i]!='1') { ok=0; break; }
    printf("Eh sequencia binaria de 8 bits? %s\n", (ok && strlen(s)-1==8) ? "Sim":"Nao");
    return 0;
}
