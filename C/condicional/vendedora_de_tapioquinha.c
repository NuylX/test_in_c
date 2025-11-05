#include <stdio.h>

int main () {
    int dia_semana;

    printf("Olá bem vindo para a barraca de tapiocaria da dona Ana\n");
    printf("Aqui na barraca você encontra diversos sabores de tapiocas de acordo com o dia da semana: \n");
    printf("1. Segunda-Feira: tapioquinha de tucumã com queijo\n");
    printf("2. Terça-Feira: tapioquinha com banana frita e leite condensado\n");
    printf("3. Quarta-Feira: tapioquinha de tucumã com queijo\n");
    printf("4. Quinta-Feira: tapioquinha com banana frita e leite condensado\n");
    printf("5. Sexta-Feira: tapioquinha de tucumã com queijo\n");
    printf("6. Sábado: tapioquinha mista com tudo dentro\n");
    printf("7. Domingo: tapioquinha mista com tudo dentro\n");

    printf("\nDigite o dia da semana que deseja pedir a sua tabioca (1 a 7): ");
    scanf("%d", &dia_semana);

    if (dia_semana == 1) {
        printf("Hoje temos tapiocquinha de tucumã com queijo!");
    }

    else if (dia_semana == 2) {
        printf("Hoje o destaque é tapioquinha com banana frita e leite condensado!");
    }

    else if (dia_semana == 3) {
        printf("Hoje temos tapioquinha de tucumã com queijo!");
    }

    else  if(dia_semana == 4) {
        printf("Hoje o destaque é tapioquinha com banana frita e leite condensado!");
    }

    else if (dia_semana == 5) {
        printf("Hoje temos tapioquinha de tucumã com queijo!");
    }

    else if (dia_semana == 6) {
        printf("É dia de tapioquinha mista com tudo dentro!");
    }

    else if (dia_semana == 7) {
        printf("É dia de tabioquinha mista com tudo dentro!");
    }

    else {
        printf("Dia da semana digitado não existe na semana!");
    }
}