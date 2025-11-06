#include <stdio.h>

int main () {
    int porcoes;
    int pessoas;
    int cliente_fiel;
    int tucupi, jambu, camarao;
    float valor_total;

    printf("--- Sistema de Controle de Ingredientes da Dona Jurema ---\n\n");

    printf("Digite o número de porções de tacacá: ");
    scanf("%d", &porcoes);

    printf("Digite o número de pessoas que irão comer (ex: 1 ou 2): ");
    scanf("%d", &pessoas);

    printf("O cliente é fidelidade? (1 = sim / 0 = não): ");
    scanf("%d", &cliente_fiel);

    tucupi = 1 * porcoes;
    jambu = 2 * porcoes;
    camarao = 3 * porcoes;

   
    valor_total = 12.0 * porcoes;

    if (pessoas == 2) {
        valor_total = valor_total / 2;
    }

    if (cliente_fiel == 1) {
        valor_total = valor_total - 5.0;
    }

    printf("\n--- Resumo do Pedido ---\n");
    printf("Porções: %d\n", porcoes);
    printf("Tucupi necessário: %d concha(s)\n", tucupi);
    printf("Jambu necessário: %d folha(s)\n", jambu);
    printf("Camarão necessário: %d unidade(s)\n", camarao);
    printf("Valor final do pedido: R$ %.2f\n", valor_total);
}