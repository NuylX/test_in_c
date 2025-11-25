#include <stdio.h>

int main () {
    int lanche, bebida;

    printf("Digite a bebida que você vai beber hoje: ");
    scanf("%d", &bebida);

    printf("\nDigite o lanche que vai comer hoje: ");
    scanf("%d", &lanche);

    printf("---------- RESUMO DA COMANDA ----------");
    printf("A sua bebida é: %d\n", bebida);
    printf("O seu lanche é: %d\n", lanche);
}