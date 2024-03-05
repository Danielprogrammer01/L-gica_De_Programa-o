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

void mostrarDados(float numero1,float numero2, float media)
{
    printf("1º número: %.1f\n", numero1);
    printf("2º número: %.1f\n", numero2);
    printf("Média: %.1f\n", media);
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

    printf("Digite o 1º número: ");
    scanf("%f", &numero1);
    
    printf("Digite o 2º número: ");
    scanf("%f", &numero2);

    limpaTela();

    media = calcularMedia(numero1, numero2);

    mostrarDados(numero1, numero2,media);
    
    /*printf("Média: %.1f\n", calcularMedia(numero1, numero2));*/
    
    return 0;
}