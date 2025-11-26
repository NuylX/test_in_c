#include <stdio.h>

int main () {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("\nVocê tem %d anos");

    if (idade <= 15) {
        printf("Você tem %d anos, ainda é menor de idade\n", idade);
    }

    else if (idade >= 18) {
        printf("Você tem %d anos, já é maior de idade\nJá pode fazer o que quiser.", idade);
    }

    else if(idade >= 30) {
        printf("Você tem %d anos, você está pagando muitos boletos", idade);
    }
    
    else {
        printf("Você tem %d anos\nVocê é idoso, já está na hora de se aposentar", idade);
    }
}