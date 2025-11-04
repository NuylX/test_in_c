#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade < 18) {
        printf("Você ainda é menor de idade!\n");
    }

    else if (idade >= 18) {
        printf("Você já é maior de idade!\n");
    }

    else {
        printf("idade invalida!");
    }
}