#include <stdio.h>
#include <string.h>

int main() {
    char escolha;
    char username[50];
    int senha;
    int autorizado_alto_nivel;
    int horario_comercial;
    int em_manutencao = 0;

    do {
        printf("\n=====================================\n");
        printf("        MENU DE ACESSO DO SISTEMA    \n");
        printf("=====================================\n");
        printf("Deseja tentar o acesso? (s = sim / n = sair): ");
        scanf(" %c", &escolha);

        if (escolha == 's' || escolha == 'S') {
            printf("\nNome de usuário: ");
            scanf("%s", username);
            printf("Senha (apenas numeros): ");
            scanf("%d", &senha);

            if (strcmp(username, "admin") == 0 && senha == 1234) {
                printf("\n-> Credenciais OK!\n");

                printf("Tem autorizacao de alto nivel? (1 = sim / 0 = nao): ");
                scanf("%d", &autorizado_alto_nivel);
                printf("Acesso em horario comercial? (1 = sim / 0 = nao): ");
                scanf("%d", &horario_comercial);

                if (autorizado_alto_nivel || horario_comercial) {
                    if (!em_manutencao) {
                        printf("\nACESSO LIBERADO: Bem-vindo ao sistema!\n");
                    } else {
                        printf("\nACESSO NEGADO: Sistema em manutencao.\n");
                    }
                } else {
                    printf("\nACESSO NEGADO: Nao atende as regras de acesso (alto nivel OU horario comercial).\n");
                }

            } else {
                printf("\nCredenciais incorretas. Voltando ao menu principal.\n");
            }

        } else if (escolha == 'n' || escolha == 'N') {
            printf("Saindo do programa. Ate logo.\n");
            break;
        } else {
            printf("Opcao invalida. Voltando ao menu.\n");
        }
    } while (1);

    return 0;
}