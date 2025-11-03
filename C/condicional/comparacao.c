#include <stdio.h>

int main() {
    int num1, num2;
    printf("-----------------------------------------------------------------------------------------------------\n");
    printf("Bem vindo ao comparador de números!\n");
    printf("O programa irá comparar dois números inteiros que forem digitados e informar qual deles é o maior.\n");
    printf("-----------------------------------------------------------------------------------------------------\n");
    printf("\nDigite o primeiro número: ");
    scanf("%d", &num1);

    printf("\nDigite o segundo número: ");
    scanf("%d", &num2);

    if(num1 > num2) {
        printf("O primeiro número digitado: %d é maior que  o segundo número digitado: %d\n", num1, num2);
    }

    else if (num1 < num2) {
        printf("O segundo número digitado: %d é maior que o primeiro número que foi digitado: %d\n", num2, num1);
    }

    else {
        printf("Os dois número que foram digitados são iguais: %d e %d\n", num1, num2);
    }
}