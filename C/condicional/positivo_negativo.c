#include <stdio.h>

int main(){
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("O número digitado %d é positivo.\n", num);
    }

    else if(num < 0) {
        printf("O número digitado %d é negativo.\n", num);
    }

    else {
        printf("O número digitado não tem valor positivo ou negativo, pois acaba sendo zero.\n");
    }
}