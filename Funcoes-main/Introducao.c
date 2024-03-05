#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome[999];
    int idade;

    printf("\n=====================\n");
    printf("\tSENAI");
    printf("\n=====================\n");
    
    printf("Digite um nome: ");
    gets(nome);
    
    printf("Digite uma idade: ");
    scanf("%d", &idade);

    printf("\n=====================\n");
    printf("\tSENAI");
    printf("\n=====================\n");

    printf("Nome: %s \n", nome);
    printf("Idade: %d \n", idade);

    return 0;
}   