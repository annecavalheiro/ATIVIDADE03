#include <stdio.h>
#include <string.h>
#include <ctype.h>

void squeeze_spaces(char *s) {
    int j = 0;
    int dentro_espaco = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (isspace((unsigned char)s[i])) {
            if (!dentro_espaco) {
                s[j++] = ' ';
                dentro_espaco = 1;
            }
        } else {
            s[j++] = s[i];
            dentro_espaco = 0;
        }
    }

    s[j] = '\0';
}

int main() {
    char texto[600];

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    squeeze_spaces(texto);

    printf("Resultado: %s\n", texto);

    return 0;
}
