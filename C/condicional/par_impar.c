#include <stdio.h>

int main() {
    int number;

    printf("Digite um número: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("O numero %d é par.\n", number);
    }

    else {
        printf("O número %d é impar.\n");
    }
}