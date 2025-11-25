#include <stdio.h>

int main() {
    int churrasco, bebida, pessoas;

    printf("Digite o número de pessoas para a churrascaria: ");
    scanf("%d", &pessoas);

    printf("\nDigite a quantidade de bebidas que tem na festa: ");
    scanf("%d", &bebida);

    printf("Digite a quantidade de carnes no churrasco para as pessoas é: ");
    scanf("%d", &churrasco);

    printf("-------------- RESUMO DOS PEDIDOS -------------\n");
    printf("O número de pessoas na churrascaria são %d pessoas\n", pessoas);
    printf("A quantidade de bebida que há na festa: %d\n", bebida);
    printf("O número de quantidade de carnes são: %d", churrasco);
}