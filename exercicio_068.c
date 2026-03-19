#include <stdio.h>

/*
========================================
Exercício 68 - Audiência de TV
========================================

ENTRADA:
Para cada casa:
- Número do canal (4, 5, 7, 12)
- Número de pessoas assistindo

OBS:
- Finaliza quando o canal for 0

PROCESSAMENTO:
- Somar o número de pessoas por canal
- Somar o total geral de pessoas
- Calcular a porcentagem de audiência de cada canal

SAÍDA:
- Canal e sua respectiva porcentagem de audiência
========================================
*/

int main() {

    // ===== ENTRADA =====
    int canal;
    int pessoas;

    // ===== PROCESSAMENTO =====
    int total_pessoas = 0;

    int canal4 = 0;
    int canal5 = 0;
    int canal7 = 0;
    int canal12 = 0;

    printf("Digite os dados (canal e pessoas). Canal 0 encerra.\n");

    while (1) {

        printf("\nCanal (4,5,7,12 ou 0 para sair): ");
        scanf("%d", &canal);

        if (canal == 0)
            break;

        printf("Quantidade de pessoas: ");
        scanf("%d", &pessoas);

        total_pessoas += pessoas;

        // soma por canal
        if (canal == 4) {
            canal4 += pessoas;
        } else if (canal == 5) {
            canal5 += pessoas;
        } else if (canal == 7) {
            canal7 += pessoas;
        } else if (canal == 12) {
            canal12 += pessoas;
        }
    }

    // ===== CÁLCULOS =====
    float perc4 = 0, perc5 = 0, perc7 = 0, perc12 = 0;

    if (total_pessoas > 0) {
        perc4 = (canal4 * 100.0) / total_pessoas;
        perc5 = (canal5 * 100.0) / total_pessoas;
        perc7 = (canal7 * 100.0) / total_pessoas;
        perc12 = (canal12 * 100.0) / total_pessoas;
    }

    // ===== SAÍDA =====
    printf("\n===== AUDIENCIA =====\n");

    printf("Canal 4: %.2f%%\n", perc4);
    printf("Canal 5: %.2f%%\n", perc5);
    printf("Canal 7: %.2f%%\n", perc7);
    printf("Canal 12: %.2f%%\n", perc12);

    return 0;
}