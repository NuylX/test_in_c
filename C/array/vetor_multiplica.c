#include <stdio.h>

int main() {
    int A[4], B[4], M[4], i;
    printf("Entre com 4 valores do vetor A (dano base):\n");
    for (i = 0; i < 4; i++) scanf("%d", &A[i]);

    printf("Entre com 4 valores do vetor B (fator de combo):\n");
    for (i = 0; i < 4; i++) scanf("%d", &B[i]);

    for (i = 0; i < 4; i++) M[i] = A[i] * B[i];

    printf("\nDano Multiplicado (M):\n");
    for (i = 0; i < 4; i++) printf("M[%d] = %d\n", i, M[i]);

    return 0;
}