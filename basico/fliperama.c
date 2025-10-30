#include <stdio.h>

int main() {
    int creditos = 20;
    creditos += 5;
    int custo_partida = 4;
    int partidas = 3;
    creditos -= custo_partida * partidas;
    
    printf("O jogador tem créditos restantes: %d\n", creditos);
    return 0;
}