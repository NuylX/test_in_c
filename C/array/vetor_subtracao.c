#include <stdio.h>

int main() {
    int X[6], Y[6], D[6], i;
    printf("Entre com 6 valores do vetor X (ataques):\n");
    for (i = 0; i < 6; i++) scanf("%d", &X[i]);

    printf("Entre com 6 valores do vetor Y (defesas):\n");
    for (i = 0; i < 6; i++) scanf("%d", &Y[i]);

    for (i = 0; i < 6; i++) D[i] = X[i] - Y[i];

    printf("\nDano Efetivo (D):\n");
    for (i = 0; i < 6; i++) printf("D[%d] = %d\n", i, D[i]);

    return 0;
}
