#include <stdio.h>
#include <string.h>

/*
========================================
Exercício 65 - Ausência por Turma
========================================

ENTRADA:
Para cada turma:
- Identificação da turma (A, B, C, ...)
- Número de alunos matriculados
- Para cada aluno:
    - Matrícula
    - Situação: 'A' (ausente) ou 'P' (presente)

OBS:
- O final ocorre quando a matrícula for 0

PROCESSAMENTO:
- Para cada turma:
    - Calcular a porcentagem de alunos ausentes
- Contar quantas turmas têm ausência maior que 5%

SAÍDA:
- Identificação da turma e sua porcentagem de ausência
- Quantidade de turmas com ausência maior que 5%
========================================
*/

int main() {

    // ===== ENTRADA =====
    char turma;
    int total_alunos;
    int matricula;
    char situacao;

    int turmas_acima_5 = 0;

    printf("Digite a identificacao da turma (ou 0 para sair): ");
    scanf(" %c", &turma);

    // ===== PROCESSAMENTO =====
    while (turma != '0') {

        printf("Numero de alunos da turma %c: ", turma);
        scanf("%d", &total_alunos);

        int ausentes = 0;

        printf("\nDigite os dados dos alunos (matricula e A/P):\n");

        while (1) {
            printf("Matricula (0 encerra turma): ");
            scanf("%d", &matricula);

            if (matricula == 0)
                break;

            printf("Situacao (A=ausente, P=presente): ");
            scanf(" %c", &situacao);

            if (situacao == 'A' || situacao == 'a') {
                ausentes++;
            }
        }

        // cálculo da porcentagem
        float porcentagem = (ausentes * 100.0) / total_alunos;

        // ===== SAÍDA =====
        printf("\nTurma %c - Ausencia: %.2f%%\n\n", turma, porcentagem);

        if (porcentagem > 5.0) {
            turmas_acima_5++;
        }

        // próxima turma
        printf("Digite a identificacao da proxima turma (ou 0 para sair): ");
        scanf(" %c", &turma);
    }

    // resultado final
    printf("\nQuantidade de turmas com ausencia maior que 5%%: %d\n", turmas_acima_5);

    return 0;
}