
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    int n; char bin[64];
    printf("Digite decimal: "); if(scanf("%d",&n)!=1) return 0;
    if(n==0) { printf("0\n"); return 0; }
    int idx=0, neg=0;
    if(n<0){ neg=1; n=-n; }
    while(n){ bin[idx++] = (n%2)+'0'; n/=2; }
    if(neg) putchar('-');
    for(int i=idx-1;i>=0;i--) putchar(bin[i]);
    putchar('\n');
    return 0;
}
