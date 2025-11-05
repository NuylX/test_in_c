#include <stdio.h>

int main () {
    float temperatura;

    printf("Digite a sua Temperatura em °C: ");
    scanf("%f", &temperatura);

    if (temperatura > 37.5) {
        printf("Você está com febre! Tome um banho de rio e procure o posto de saúde\n A temperatura de hoje está %.2f °C", temperatura);
    }

    else if (temperatura >= 36.0 && temperatura <= 37.5) {
        printf("Tudo certo! Continue tomando seu chá de jambú!\n A temperatura de hoje está %.2f °C", temperatura);
    }

    else if (temperatura < 36.0) {
        printf("Temperatura baixa! Vista sua camisa de malha e vá comer um Xcaboquinho!\n A temperatura de hoje está %.2f °C", temperatura);
    }

    else {
        printf("Não saia de casa!\n Pois a temperatura está nos incriveis %.2f °C", temperatura);
    }
}