// QUESTÃO 9 - Ler nota final de 50 alunos e mostrar total de aprovados
#include <stdio.h>
int main() {
    int i, aprovados = 0;
    float nota;
    for(i = 1; i <= 50; i++) {
        printf("Nota do aluno %d: ", i);
        scanf("%f", &nota);
        if(nota >= 6)
            aprovados++;
    }
    printf("Total de aprovados: %d\n", aprovados);
    return 0;
}
