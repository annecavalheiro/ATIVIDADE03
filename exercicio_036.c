#include <stdio.h>

int main(){
    char s[1000];
    int i, best=0, cur=0;
    printf("Digite cadeia binaria: ");
    fgets(s, sizeof s, stdin);

    for(i=0; s[i] && s[i]!='\n'; i++){
        if(s[i]=='1'){
            cur++;
            if(cur>best) best=cur;
        } else {
            cur=0;
        }
    }

    printf("Maior sequencia de 1s: %d\n", best);
    return 0;
}
