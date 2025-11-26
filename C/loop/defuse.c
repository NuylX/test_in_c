#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int bomb = 40, situation;

    printf("Você está em um round muito importante: \n");
    printf("Você está no mapa Mirage no lado Contra-Terrorista...\n");
    printf("A bomba foi plantada no bomb B pelos terroristas...\n");
    printf("Está uma situação de você contra dois terroristas...\n");
    printf("A bomba vai explodir em 40 segundos...\n");

    while(bomb >= 0) {
        printf("A bomba foi plantada...");
        printf("%d\n", bomb);
        sleep(2);
    }

    printf("Você está planejando fazer um retake para o bomb B pela caverna...\n");
    printf("Mas vê terrorista de costas para você...");
    printf("E você tem que decidir rapidamente o que fazer no round: \n");
    printf("1. Você pode matar rapidamente o terrorista e depois buscar informação do segundo terrorista...\n");
    printf("2. Você espera o primeiro terrorista entregar informação...\n");
    printf("3. Você pode decide mudar de posição para ver se encontra o 2° terrorista...\n");
    printf("4. Você encontra um kit defuse junto com uma smoke e vai defusar direto a bomba...\n");
    printf("5. Você muda de armamento para ter mais poder de fogo...\n");
    printf("3. Você guardar a sua arma para ajudar no proximo round...\n");
    scanf("%d", &situation);

    switch (situation) {
    case 1:
        printf("Você consegue matar os dois terroristas e a bomba foi defusada...");
        bomb = 0;
        break;

    case 2:
        printf("Você morre e perde o round");
        printf("Os terroristas venceram...");
        bomb = 0;
        break;
    
    default:
        printf("Os terroristas venceram");
    }
}