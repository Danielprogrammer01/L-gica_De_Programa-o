#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>

void limpaTela()
{
    fflush(stdin);
    system("cls || clear");
}

float calcularMedia(float n1, float n2)
{
    return (n1 + n2) / 2;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    float numero1;
    float numero2;
    float media;

    printf("Digite o 1� n�mero: ");
    scanf("%f", &numero1);
    
    printf("Digite o 2� n�mero: ");
    scanf("%f", &numero2);

    limpaTela();

    printf("1� n�mero: %.1f\n", numero1);

    printf("2� n�mero: %.1f\n", numero2);
    
    media = calcularMedia(numero1, numero2);

    printf("M�dia: %.1f\n", media);
    
    /*printf("M�dia: %.1f\n", calcularMedia(numero1, numero2));*/
    
    return 0;
}