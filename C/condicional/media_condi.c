#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, n3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) /3;

    if (media > 7){
        printf("O Aluno tirou %.2f e está aprovado|\n", media);
    }

    else(
        printf("O aluno tirou %.2f e está reprovado!\n", media)
    );
    return 0;
}