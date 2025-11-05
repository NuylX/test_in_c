#include <stdio.h>

int main () {
    float peso, altura, imc;

    printf("Digite o seu peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a sua altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    if (imc > 18.5) {
        printf("Voce esta acima do peso. Seu IMC: %.2f\n", imc);
    }
    else if (imc < 18.5) {
        printf("Voce esta abaixo do peso. Seu IMC: %.2f\n", imc);
    }
    
    else {
        printf("Voce esta com o peso normal. Seu IMC: %.2f\n", imc);
    }
}