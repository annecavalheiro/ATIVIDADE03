#include <stdio.h>
#include <string.h>

int main() {
    char texto[1000];
    int maior = 0, atual = 0;

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    for (int i = 0; texto[i] != '\0' && texto[i] != '\n'; i++) {
        if (texto[i] == ' ') {
            atual++;
        } else {
            if (atual > maior) {
                maior = atual;
            }
            atual = 0;
        }
    }

    /* Caso a string termine em espacos */
    if (atual > maior) {
        maior = atual;
    }

    printf("Maior sequencia de espacos: %d\n", maior);
    return 0;
}
