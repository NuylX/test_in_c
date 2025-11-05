#include <stdio.h>

int main () {
    int peixe_assado, farinha_uarani, farova_ovo, farofa_calabresa, farofa_jaba;

    printf("-------------------------\nBem vindo ao Quiosque de Gulosseimas do João------------------------\n");

    printf("Aqui está uma das opções do cardapio para comer: \n");
    printf("1. Peixe Assado\n");
    printf("2. Farinha do Uarini\n");;
    printf("3. Farofa de Jabá\n");
    printf("4. Farofa de Calabresa\n");
    printf ("5. Farova de Ovo\n");

    printf("\nVocê vai querer um Peixe Assado? (1 = Sim / 0 = Não): ");
    scanf("%d", &peixe_assado);

    printf("\nVocê querer a farinha do Uarini? (1 = Sim / 0 = Não): ");
    scanf("%d", &farinha_uarani);

    printf("\nVocê vai querer uma farofa de Jabá? (1 = Sim / 0 = Não): ");
    scanf("%d", &farofa_jaba);

    printf("\nVocê vai querer uma farofa de Calabresa? (1 = Sim / 0 = Não): ");
    scanf("%d", &farofa_calabresa);

    printf("\nVocê vai querer uma farova de Ovo? (1 = Sim / 0 = Não): ");
    scanf("%d", &farova_ovo);

   printf("\n----------------------------------------------------------------------------\n");

    if (peixe_assado == 1 && farinha_uarani == 0 && farofa_jaba == 0 && farofa_calabresa == 0 && farova_ovo == 0) {
        printf("Já já chega o pedido do seu Peixe Assado!");
    }

    else if (farinha_uarani == 1 && farofa_jaba  == 0 && farofa_calabresa == 0  && farova_ovo == 0) {
        printf("Já já chega o seu pedido da Farinha do Uarani!");
    }

    else if (farofa_jaba == 1 && farofa_calabresa == 0 && farova_ovo) {
        printf("Já já chega o seu pedido da Farofa de Jabá!");
    }

    else if (farofa_calabresa == 1 && farova_ovo == 0) {
            printf("O seu pedido da farofa de Calabresa já já chega em sua mesa!");
        }
    
    else if (farova_ovo == 1) {
        printf("O seu pedido da Farofa de Ovo já já chega em sua mesa!");
    }

    else if (peixe_assado || farinha_uarani || farofa_jaba || farofa_calabresa || farova_ovo) {
        printf("Você escolheu todo o cardapio! \n Coma devagar para não engasgar (Obs: A água vai ser por conta da casa devido ao número de pedidos ou vai ser para viagem?)");
    }

    else {
        printf("No Aguardo do pedido do cliente!");
    }
}