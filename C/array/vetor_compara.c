#include <stdio.h>

int main() {
    int A[5], B[5], i;
    int iguais = 1;

    printf("Entre com 5 valores do vetor A (estado atual):\n");
    for (i = 0; i < 5; i++) scanf("%d", &A[i]);

    printf("Entre com 5 valores do vetor B (estado salvo):\n");
    for (i = 0; i < 5; i++) scanf("%d", &B[i]);

    for (i = 0; i < 5; i++) {
        if (A[i] != B[i]) { iguais = 0; break; }
    }

    if (iguais) printf("\nReplay: Perfeito (Vetores iguais)\n");
    else printf("\nReplay: Desincronizado (Vetores diferentes)\n");

    return 0;
}