#include <stdio.h>

/*
========================================
Exercício 70 - Sistema de Avaliação
========================================

ENTRADA:
Para cada aluno (100 alunos):
- Número de matrícula
- Três notas
- Frequência (número de aulas frequentadas)

PROCESSAMENTO:
Para cada aluno:
- Calcular média aritmética
- Verificar:
    - Aprovado: média >= 60 E frequência >= 40
    - Reprovado: caso contrário

Geral:
- Maior nota da turma
- Menor nota da turma
- Média da turma
- Total de reprovados
- % de reprovados por falta

SAÍDA:
Para cada aluno:
- matrícula, frequência, média, situação

Final:
- maior nota
- menor nota
- média da turma
- total de reprovados
- % de reprovados por falta
========================================
*/

int main() {

    // ===== PROCESSAMENTO =====
    int matricula;
    float n1, n2, n3, media;

    int frequencia;

    float maior = 0, menor = 100;
    float soma_medias = 0;

    int reprovados = 0;
    int reprovados_falta = 0;

    // ===== ENTRADA + PROCESSAMENTO =====
    for (int i = 1; i <= 100; i++) {

        printf("\nAluno %d\n", i);

        printf("Matricula: ");
        scanf("%d", &matricula);

        printf("Nota 1: ");
        scanf("%f", &n1);

        printf("Nota 2: ");
        scanf("%f", &n2);

        printf("Nota 3: ");
        scanf("%f", &n3);

        printf("Frequencia: ");
        scanf("%d", &frequencia);

        // cálculo da média
        media = (n1 + n2 + n3) / 3;

        soma_medias += media;

        // maior e menor média
        if (media > maior) {
            maior = media;
        }

        if (media < menor) {
            menor = media;
        }

        // verificação de aprovação
        if (media >= 60 && frequencia >= 40) {
            printf("Situacao: APROVADO\n");
        } else {
            printf("Situacao: REPROVADO\n");
            reprovados++;

            if (frequencia < 40) {
                reprovados_falta++;
            }
        }

        // ===== SAÍDA por aluno =====
        printf("Matricula: %d | Media: %.2f | Frequencia: %d\n",
               matricula, media, frequencia);
    }

    // ===== CÁLCULOS FINAIS =====
    float media_turma = soma_medias / 100;
    float perc_falta = (reprovados_falta * 100.0) / 100;

    // ===== SAÍDA FINAL =====
    printf("\n===== RESULTADO FINAL =====\n");
    printf("Maior media: %.2f\n", maior);
    printf("Menor media: %.2f\n", menor);
    printf("Media da turma: %.2f\n", media_turma);
    printf("Total de reprovados: %d\n", reprovados);
    printf("Percentual por falta: %.2f%%\n", perc_falta);

    return 0;
}