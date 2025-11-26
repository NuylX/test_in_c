#include <stdio.h>

int main() {
    int convidados, mesa, cadeira;

    printf("Digite o número de convidados para o casamento: ");
    scanf("%d", &convidados);

    printf("\nDigite o número de mesas para a festa de casamento: ");
    scanf("%d", &mesa);

    printf("\nDigite o númerod de cadeiras para a festa de casamento: ");
    scanf("%d", &cadeira);

    printf("A quantidade de convidados são: %d pessoas\n", convidados);
    printf("A quantidade de mesas e cadeiras são: %d mesas\n", mesa);
    printf("A quantidade de cadeiras são %d cadeiras\n", cadeira);
}