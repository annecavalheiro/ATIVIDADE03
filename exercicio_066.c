#include <stdio.h>

/*
========================================
Exercício 66 - Pesquisa de Opinião
========================================

ENTRADA:
Para cada pessoa (total de 2000):
- Sexo: M (masculino) ou F (feminino)
- Resposta: S (sim) ou N (não)

PROCESSAMENTO:
- Contar:
    - Total de respostas "sim"
    - Total de respostas "não"
    - Mulheres que responderam "sim"
    - Homens que responderam "não"
- Calcular:
    - % de mulheres que disseram "sim"
    - % de homens que disseram "não"

SAÍDA:
- Quantidade de "sim"
- Quantidade de "não"
- % de mulheres que disseram "sim"
- % de homens que disseram "não"
========================================
*/

int main() {

    // ===== ENTRADA =====
    char sexo, resposta;

    // ===== PROCESSAMENTO =====
    int total_sim = 0, total_nao = 0;
    int mulheres = 0, homens = 0;
    int mulheres_sim = 0, homens_nao = 0;

    for (int i = 1; i <= 2000; i++) {

        printf("\nPessoa %d\n", i);

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Resposta (S/N): ");
        scanf(" %c", &resposta);

        // Contagem geral
        if (resposta == 'S' || resposta == 's') {
            total_sim++;
        } else if (resposta == 'N' || resposta == 'n') {
            total_nao++;
        }

        // Contagem por sexo
        if (sexo == 'F' || sexo == 'f') {
            mulheres++;

            if (resposta == 'S' || resposta == 's') {
                mulheres_sim++;
            }

        } else if (sexo == 'M' || sexo == 'm') {
            homens++;

            if (resposta == 'N' || resposta == 'n') {
                homens_nao++;
            }
        }
    }

    // Cálculo das porcentagens
    float perc_mulheres_sim = 0;
    float perc_homens_nao = 0;

    if (mulheres > 0)
        perc_mulheres_sim = (mulheres_sim * 100.0) / mulheres;

    if (homens > 0)
        perc_homens_nao = (homens_nao * 100.0) / homens;


    // ===== SAÍDA =====
    printf("\n===== RESULTADO =====\n");
    printf("Total de SIM: %d\n", total_sim);
    printf("Total de NAO: %d\n", total_nao);
    printf("%% de mulheres que disseram SIM: %.2f%%\n", perc_mulheres_sim);
    printf("%% de homens que disseram NAO: %.2f%%\n", perc_homens_nao);

    return 0;
}