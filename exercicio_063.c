#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double centroX, centroY;
    int n;
    double pontoX, pontoY;
    double raios[100];
    int qtdRaios = 0;

    printf("Digite o centro (x y): ");
    if(scanf("%lf %lf", &centroX, &centroY) != 2){
        printf("Entrada invalida.\n");
        return 0;
    }

    printf("Quantidade de pontos: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%lf %lf", &pontoX, &pontoY);

        double distancia = hypot(pontoX - centroX, pontoY - centroY);

        int jaExiste = 0;
        for(int j = 0; j < qtdRaios; j++){
            if(fabs(raios[j] - distancia) < 1e-6){
                jaExiste = 1;
                break;
            }
        }

        if(!jaExiste){
            raios[qtdRaios] = distancia;
            qtdRaios++;
        }
    }

    printf("Raios unicos: ");
    for(int i = 0; i < qtdRaios; i++){
        printf("%.3f ", raios[i]);
    }
    printf("\n");

    return 0;
}
