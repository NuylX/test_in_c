#include <stdio.h>

int main () {
    float nota1, nota2, media_final;

    nota1 = 10.0;
    nota2 = 7.0;

    printf("A nota 1: %.2f\n", nota1);

    printf("A nota 2: %.2f\n", nota2);

    media_final = (nota1 + nota2) / 2;

    printf("A media é: %.2f\n", media_final);

    return 0;
}