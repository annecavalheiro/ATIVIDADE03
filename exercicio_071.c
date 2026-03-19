#include <stdio.h>

/*
========================================
Exercício 71 - Consumo de Energia
========================================

ENTRADA:
Para cada consumidor:
- Número do consumidor
- Quantidade de kWh consumidos no mês
- Tipo de consumidor:
    1 - residencial
    2 - comercial
    3 - industrial

OBS:
- Finaliza quando o número do consumidor for 0

PROCESSAMENTO:
- Calcular valor a pagar:
    residencial = R$ 0.30 por kWh
    comercial   = R$ 0.50 por kWh
    industrial  = R$ 0.70 por kWh

- Acumular:
    - total geral de consumo
    - total por tipo

- Calcular:
    - percentual de consumo por tipo

SAÍDA:
- Para cada consumidor:
    número e valor a pagar

- Final:
    consumo total
    percentual por tipo
========================================
*/

int main() {

    // ===== ENTRADA =====
    int numero;
    int tipo;
    float consumo;

    // ===== PROCESSAMENTO =====
    float valor;

    float total_consumo = 0;
    float total_residencial = 0;
    float total_comercial = 0;
    float total_industrial = 0;

    printf("Digite os dados (numero 0 encerra)\n");

    while (1) {

        printf("\nNumero do consumidor: ");
        scanf("%d", &numero);

        if (numero == 0)
            break;

        printf("Consumo (kWh): ");
        scanf("%f", &consumo);

        printf("Tipo (1-residencial, 2-comercial, 3-industrial): ");
        scanf("%d", &tipo);

        // cálculo do valor
        if (tipo == 1) {
            valor = consumo * 0.30;
            total_residencial += consumo;
        } 
        else if (tipo == 2) {
            valor = consumo * 0.50;
            total_comercial += consumo;
        } 
        else if (tipo == 3) {
            valor = consumo * 0.70;
            total_industrial += consumo;
        }

        total_consumo += consumo;

        // ===== SAÍDA por consumidor =====
        printf("Consumidor %d - Valor a pagar: R$ %.2f\n", numero, valor);
    }

    // ===== CÁLCULOS =====
    float perc_res = 0, perc_com = 0, perc_ind = 0;

    if (total_consumo > 0) {
        perc_res = (total_residencial * 100.0) / total_consumo;
        perc_com = (total_comercial * 100.0) / total_consumo;
        perc_ind = (total_industrial * 100.0) / total_consumo;
    }

    // ===== SAÍDA FINAL =====
    printf("\n===== RESULTADO FINAL =====\n");
    printf("Consumo total: %.2f kWh\n", total_consumo);
    printf("Residencial: %.2f%%\n", perc_res);
    printf("Comercial: %.2f%%\n", perc_com);
    printf("Industrial: %.2f%%\n", perc_ind);

    return 0;
}