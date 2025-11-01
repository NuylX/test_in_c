#include <stdio.h>

int main() {
    char nome[50] = "User";
    int idade = 0;
    float altura = 0.0;

    //printf("Digite o seu nome: ");
    //scanf("%s", &nome);

    //printf("Digite a sua idade: ");
    //scanf("%d", &idade);

    //printf("Digite a sua altura (Digite em metros): ");
    //scanf("%f", &altura);

    //printf("Dados Pessoais: \n");
    printf("Nome: %s\nIdade: %d\nAltura: %.2f\n", nome, idade, altura);
    return 0;
}