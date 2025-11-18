
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int valida_cnpj(const char *cnpj){
    int d[14], idx=0;
    for(int i=0; cnpj[i] && idx<14; i++) if(isdigit((unsigned char)cnpj[i])) d[idx++]=cnpj[i]-'0';
    if(idx!=14) return 0;
    int calc1=0, mult1[]={5,4,3,2,9,8,7,6,5,4,3,2};
    for(int i=0;i<12;i++) calc1+=d[i]*mult1[i];
    int r = calc1%11; int ver1 = (r<2)?0:11-r;
    int calc2=0, mult2[]={6,5,4,3,2,9,8,7,6,5,4,3,2};
    for(int i=0;i<13;i++) calc2+=d[i]*mult2[i];
    r = calc2%11; int ver2=(r<2)?0:11-r;
    return ver1==d[12] && ver2==d[13];
}
int main(){
    char s[64];
    printf("Digite CNPJ: "); fgets(s,sizeof s,stdin);
    printf("CNPJ valido? %s\n", valida_cnpj(s) ? "Sim":"Nao");
    return 0;
}
