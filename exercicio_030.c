
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int valida_cpf(const char *cpf){
    int nums[11]; int idx=0;
    for(int i=0; cpf[i] && idx<11; i++) if(isdigit((unsigned char)cpf[i])) nums[idx++]=cpf[i]-'0';
    if(idx!=11) return 0;
    int sum=0;
    for(int i=0;i<9;i++) sum += nums[i]*(10-i);
    int r = sum%11; int d1 = (r<2)?0:11-r;
    sum=0;
    for(int i=0;i<10;i++) sum += nums[i]*(11-i);
    r = sum%11; int d2 = (r<2)?0:11-r;
    return d1==nums[9] && d2==nums[10];
}
int main(){
    char s[64];
    printf("Digite CPF (formato qualquer): "); fgets(s,sizeof s,stdin);
    printf("CPF valido? %s\n", valida_cpf(s) ? "Sim":"Nao");
    return 0;
}
