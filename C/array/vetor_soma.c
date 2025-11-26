#include <stdio.h>

int main() {
    int A[5], B[5], S[5], i;
    char *nomes[5] = {"Forca", "Destreza", "Vitalidade", "Magia", "Sorte"};

    printf("Entre com 5 valores do vetor A (atributos base):\n");
    for (i = 0; i < 5; i++) {
        printf("%s: ", nomes[i]);
        scanf("%d", &A[i]);
    }

    printf("\nEntre com 5 valores do vetor B (bonus do equipamento):\n");
    for (i = 0; i < 5; i++) {
        printf("%s: ", nomes[i]);
        scanf("%d", &B[i]);
    }

    for (i = 0; i < 5; i++) S[i] = A[i] + B[i];

    printf("\nStatus Final (S):\n");
    for (i = 0; i < 5; i++) {
        printf("%s: %d\n", nomes[i], S[i]);
    }

    return 0;
}