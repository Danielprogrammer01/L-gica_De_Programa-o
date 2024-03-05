#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int quantidade = 5;
    char nome[quantidade][500];
    int idade[quantidade];
    int i;

    for (i = 0; i < quantidade; i++)
    {

        fflush(stdin);

        printf("\nDigite o %d� nome: ", i + 1);
        gets(nome[i]);

        printf("\nDigite a idade: ");
        scanf("%d", &idade[i]);
    }

    system("clear || cls");

    printf("Dados Recebidos: \n");

    for (i = 0; i < quantidade; i++)
    {
        printf("\n%s, %d anos", nome[i], idade[i]);
    }

    printf("\n");

    return 0;
}