#include <stdio.h>
#include <stdlib.h>
#define saudacao "Ola Mundo!"

int main()
{

    int idade = 0;
    float peso = 0.0;
    char nome[50] = "";

    printf("Quantos anos voce tem?\n");
    scanf("%d", &idade);

    printf("Quantos kilos voce pesa?\n");
    scanf("%f", &peso);

    printf("Qual e o seu nome?");
    scanf("%s", &nome);

    printf("%s\n", saudacao);

    printf("Meu nome e %s, tenho %d anos, e peso %.1fkg.\n", nome, idade, peso);
}
