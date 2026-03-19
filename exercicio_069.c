#include <stdio.h>

/*
========================================
Exercício 69 - Concurso Vestibular
========================================

ENTRADA:
Para cada curso:
- Código do curso
- Número de vagas
- Número de candidatos masculinos
- Número de candidatos femininos

OBS:
- Finaliza quando o código do curso for 0

PROCESSAMENTO:
Para cada curso:
- Calcular candidatos por vaga
- Calcular % de mulheres

Geral:
- Encontrar o curso com MAIOR candidatos por vaga
- Calcular total de candidatos

SAÍDA:
- Para cada curso:
    código, candidatos/vaga, % feminino
- Curso com maior concorrência
- Total de candidatos
========================================
*/

int main() {

    // ===== ENTRADA =====
    int codigo;
    int vagas, masc, fem;

    // ===== PROCESSAMENTO =====
    float candidatos_por_vaga;
    float perc_feminino;

    float maior_concorrencia = 0;
    int codigo_maior = 0;

    int total_candidatos = 0;

    printf("Digite os dados dos cursos (codigo 0 encerra)\n");

    while (1) {

        printf("\nCodigo do curso: ");
        scanf("%d", &codigo);

        if (codigo == 0)
            break;

        printf("Numero de vagas: ");
        scanf("%d", &vagas);

        printf("Candidatos masculinos: ");
        scanf("%d", &masc);

        printf("Candidatos femininos: ");
        scanf("%d", &fem);

        int total_curso = masc + fem;

        // cálculo candidatos por vaga
        candidatos_por_vaga = (float) total_curso / vagas;

        // cálculo porcentagem feminina
        perc_feminino = (fem * 100.0) / total_curso;

        // soma total geral
        total_candidatos += total_curso;

        // verificar maior concorrência
        if (candidatos_por_vaga > maior_concorrencia) {
            maior_concorrencia = candidatos_por_vaga;
            codigo_maior = codigo;
        }

        // ===== SAÍDA por curso =====
        printf("\nCurso %d\n", codigo);
        printf("Candidatos por vaga: %.2f\n", candidatos_por_vaga);
        printf("Percentual feminino: %.2f%%\n", perc_feminino);
    }

    // ===== SAÍDA FINAL =====
    printf("\n===== RESULTADO FINAL =====\n");
    printf("Curso com maior concorrencia: %d\n", codigo_maior);
    printf("Maior candidatos/vaga: %.2f\n", maior_concorrencia);
    printf("Total de candidatos: %d\n", total_candidatos);

    return 0;
}