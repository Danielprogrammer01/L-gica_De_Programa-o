#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main() {

    setlocale(LC_ALL,"portuguese");   

int codigo, ano, tempo, idade;
char resultado[500];

printf("Digite o seu número do empregado: ");
scanf("%d", &codigo);

printf("\nDigite o ano do seu nascimento: ");
scanf("%d", &ano);

printf("\nDigite o tempo de trabalho em anos: ");
scanf("%d", &tempo);

idade = 2023 - ano;

if (idade >= 65 || tempo >= 30 )
{
    //StringCopy - COPIA A STRING E ATRIBUI A VARIÁVEL.

    strcpy(resultado, "Requerer aposentadoria!");
}
else
{
    strcpy(resultado, "Não requerer aposentadoria!");
}

system ("cls || clear");

printf("Código do funcionário: %d \n", codigo);
printf("Idade: %d \n", idade);
printf("Tempo de trabalho: %d \n", tempo);
printf("Resultado da consulta: %s \n", resultado);

    return 0;
}