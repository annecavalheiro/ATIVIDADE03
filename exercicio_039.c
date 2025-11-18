#include <stdio.h>
#include <string.h>

int main() {
    char texto[600];
    int freq[256] = {0};

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    for (int i = 0; texto[i] != '\0'; i++) {
        unsigned char c = texto[i];
        freq[c]++;
    }

    printf("\nTabela de ocorrencias de caracteres:\n");

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c : %d\n", i, freq[i]);
        }
    }

    return 0;
}
