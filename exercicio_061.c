 #include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ehPrimo(int n){
    int i;

    if(n < 2){
        return 0;
    }

    for(i = 2; i * i <= n; i++){
        if(n % i == 0){
            return 0;
        }
    }

    return 1;
}

int main(){
    int vetor[10];
    int primos[10];
    int qtdPrimos = 0;
    int i;

    for(i = 0; i < 10; i++){
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 10; i++){
        if(ehPrimo(vetor[i])){
            primos[qtdPrimos] = vetor[i];
            qtdPrimos++;
        }
    }

    printf("\nVetor original: ");
    for(i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }

    printf("\nPrimos encontrados: ");
    for(i = 0; i < qtdPrimos; i++){
        printf("%d ", primos[i]);
    }

    printf("\n");
    return 0;
}
