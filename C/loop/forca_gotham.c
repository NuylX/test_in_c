#include <stdio.h>
#include <string.h>
#include <ctype.h>

void mostra_forca(int erros) {
    if (erros == 0) {
        printf("\n\n  +---+\n  |   |\n      |\n      |\n      |\n      |\n=========\n");
    } else if (erros == 1) {
        printf("\n\n  +---+\n  |   |\n  O   |\n      |\n      |\n      |\n=========\n");
    } else if (erros == 2) {
        printf("\n\n  +---+\n  |   |\n  O   |\n  |   |\n      |\n      |\n=========\n");
    } else if (erros == 3) {
        printf("\n\n  +---+\n  |   |\n  O   |\n /|   |\n      |\n      |\n=========\n");
    } else if (erros == 4) {
        printf("\n\n  +---+\n  |   |\n  O   |\n /|\\  |\n      |\n      |\n=========\n");
    } else if (erros == 5) {
        printf("\n\n  +---+\n  |   |\n  O   |\n /|\\  |\n /    |\n      |\n=========\n");
    } else {
        printf("\n\n  +---+\n  |   |\n  X   |\n /|\\  |\n / \\  |\n      |\n=========\n");
        printf("\nO Coringa venceu... Gordon foi sequestrado!\n");
    }
}

int main() {
    char palavra[100];
    char oculto[100];
    int tam, i, erros = 0, max_erros = 6;
    char chute;
    int acertos = 0;

    printf("JOGADOR 1: Digite a palavra secreta (sem espacos): ");
    scanf("%s", palavra);
    for (i = 0; palavra[i]; i++) palavra[i] = tolower(palavra[i]);
    tam = strlen(palavra);

    for (i = 0; i < tam; i++) oculto[i] = (palavra[i] == '-' ? '-' : '_');
    oculto[tam] = '\0';

    printf("\n\n\n\n\n\n");

    while (erros < max_erros && acertos < tam) {
        printf("Palavra: %s\n", oculto);
        mostra_forca(erros);
        printf("Digite uma letra: ");
        scanf(" %c", &chute);
        chute = tolower(chute);

        int encontrado = 0;
        for (i = 0; i < tam; i++) {
            if (palavra[i] == chute && oculto[i] != chute) {
                oculto[i] = chute;
                encontrado = 1;
                acertos++;
            }
        }

        if (!encontrado) {
            erros++;
            printf("Letra errada! Erros: %d/%d\n", erros, max_erros);
        } else {
            printf("Acertou!\n");
        }

        if (acertos == tam) {
            printf("\nPARABENS! Voce salvou o Comissario Gordon!\n");
            printf("Palavra: %s\n", palavra);
            break;
        }

        if (erros >= max_erros) {
            mostra_forca(erros);
            printf("\nVoce nao conseguiu. O Coringa venceu.\n");
            printf("Palavra era: %s\n", palavra);
            break;
        }
    }

    return 0;
}