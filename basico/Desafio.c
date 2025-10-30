#include <stdio.h>

int main() {

    printf("Tipo de Dado\tTamanho Típico (bytes)\tDescrição\t\t\tMarcador printf (Saída)\tMarcador scanf (Entrada)\n");
    printf("------------------------------------------------------------------------------------------------------------\n");
    
    printf("char\t\t%d\t\t\tCaractere simples\t\t\t%%c\t\t\t\t%%c\n", (int)sizeof(char));
    printf("int\t\t\t%d\t\t\tInteiro com sinal\t\t\t%%d\t\t\t\t%%d\n", (int)sizeof(int));
    printf("float\t\t\t%d\t\t\tPonto flutuante de precisão simples\t%%f\t\t\t\t%%f\n", (int)sizeof(float));
    printf("double\t\t\t%d\t\t\tPonto flutuante de precisão dupla\t%%f\t\t\t\t%%lf\n", (int)sizeof(double));
    printf("short\t\t\t%d\t\t\tInteiro curto com sinal\t\t%%d\t\t\t\t%%hd\n", (int)sizeof(short));
    printf("long\t\t\t%d\t\t\tInteiro longo com sinal\t\t%%ld\t\t\t\t%%ld\n", (int)sizeof(long));
    printf("unsigned int\t\t%d\t\t\tInteiro sem sinal\t\t\t%%u\t\t\t\t%%u\n", (int)sizeof(unsigned int));
    
    return 0;
}