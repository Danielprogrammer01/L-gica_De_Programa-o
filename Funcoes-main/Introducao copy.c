#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>

void cabecalho() // Função sem retorno
{
    printf("\n=====================\n");
    printf("\tSENAI");
    printf("\n=====================\n");   
}

void limpaTela()
{
    fflush(stdin);
    system("cls || clear");
}

void mostrarDados(char nome[], int idade)
{
    printf("Nome: %s \n", nome);
    printf("Idade: %d \n", idade);
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome[999];
    int idade;

    cabecalho();
    printf("Digite um nome: ");
    gets(nome);
    limpaTela();

    cabecalho();
    printf("Digite uma idade: ");
    scanf("%d", &idade);
    limpaTela();

    cabecalho();
    mostrarDados(nome,idade);

    return 0;
}   