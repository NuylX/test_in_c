#include <stdio.h>

int main() {
    int convidados, faltantes, presentes, fatias_extras = 5;

    printf("\nDigite o número de convidados para a festa na pizzaria: ");
    scanf("%d", &convidados);

    printf("\nDigite o número de convidados faltantes na festa na pizzaria: ");
    scanf("%d", &faltantes);

    presentes = (convidados - faltantes);

    printf("\nO número de convidados presentes na festa na pizzaria são %d pessoas e os faltantes são %d pessoas!\n", presentes, faltantes);

    printf("\nOs convidados presentes que são %d pessoas, e ganharam %d fatias de pizzas extras!\n", convidados, fatias_extras);

    return 0;
}