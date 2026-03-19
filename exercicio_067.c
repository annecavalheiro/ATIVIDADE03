#include <stdio.h>

/*
========================================
Exercício 67 - Mortalidade Infantil
========================================

ENTRADA:
- Número de crianças nascidas no período
- Para cada criança morta:
    - Sexo: M ou F
    - Meses de vida
- Fim dos dados: quando o sexo for "vazio"

PROCESSAMENTO:
- Contar total de crianças mortas
- Contar quantas são do sexo masculino
- Contar quantas viveram até 24 meses

- Calcular:
    - % de mortalidade
    - % de mortes masculinas
    - % de crianças que viveram <= 24 meses

SAÍDA:
- Percentual de mortalidade
- Percentual de mortes masculinas
- Percentual de crianças com até 24 meses
========================================
*/

int main() {

    // ===== ENTRADA =====
    int nascidos;
    char sexo;
    int meses;

    printf("Numero de criancas nascidas: ");
    scanf("%d", &nascidos);


    // ===== PROCESSAMENTO =====
    int total_mortes = 0;
    int mortes_masculinas = 0;
    int ate_24_meses = 0;

    printf("\nDigite os dados das criancas mortas:\n");
    printf("(Digite 'V' para encerrar)\n");

    while (1) {

        printf("\nSexo (M/F ou V para sair): ");
        scanf(" %c", &sexo);

        if (sexo == 'V' || sexo == 'v')
            break;

        printf("Meses de vida: ");
        scanf("%d", &meses);

        total_mortes++;

        if (sexo == 'M' || sexo == 'm') {
            mortes_masculinas++;
        }

        if (meses <= 24) {
            ate_24_meses++;
        }
    }


    // ===== CÁLCULOS =====
    float perc_mortalidade = 0;
    float perc_masculinas = 0;
    float perc_ate_24 = 0;

    if (nascidos > 0)
        perc_mortalidade = (total_mortes * 100.0) / nascidos;

    if (total_mortes > 0) {
        perc_masculinas = (mortes_masculinas * 100.0) / total_mortes;
        perc_ate_24 = (ate_24_meses * 100.0) / total_mortes;
    }


    // ===== SAÍDA =====
    printf("\n===== RESULTADO =====\n");
    printf("Percentual de mortalidade: %.2f%%\n", perc_mortalidade);
    printf("Percentual de mortes masculinas: %.2f%%\n", perc_masculinas);
    printf("Percentual ate 24 meses: %.2f%%\n", perc_ate_24);

    return 0;
}