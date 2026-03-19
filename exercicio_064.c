#include <stdio.h>

/*
========================================
Exercício 64 - Material Radioativo
========================================

ENTRADA:
- Massa inicial em gramas

PROCESSAMENTO:
- A cada 50 segundos a massa é reduzida pela metade
- Repetir o processo até a massa ser menor que 0.5g
- Contar o tempo total em segundos
- Converter o tempo para horas, minutos e segundos

SAÍDA:
- Massa inicial
- Massa final
- Tempo total (horas, minutos e segundos)
========================================
*/

int main() {

    // ===== ENTRADA =====
    float massa_inicial;
    
    printf("Digite a massa inicial (g): ");
    scanf("%f", &massa_inicial);


    // ===== PROCESSAMENTO =====
    float massa_atual = massa_inicial;
    int tempo_total = 0; // em segundos

    while (massa_atual >= 0.5) {
        massa_atual = massa_atual / 2;
        tempo_total = tempo_total + 50;
    }


    // Conversão de tempo
    int horas = tempo_total / 3600;
    int minutos = (tempo_total % 3600) / 60;
    int segundos = tempo_total % 60;


    // ===== SAÍDA =====
    printf("\n--- RESULTADO ---\n");
    printf("Massa inicial: %.2f g\n", massa_inicial);
    printf("Massa final: %.2f g\n", massa_atual);
    printf("Tempo total: %d h %d min %d s\n", horas, minutos, segundos);

    return 0;
}