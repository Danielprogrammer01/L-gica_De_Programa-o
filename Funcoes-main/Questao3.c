#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>

void cabecalho()
{
    printf("\n===========================================\n");
    printf("\t\t3ª Questão");
    printf("\n===========================================\n");
}

void espaco()
{
    printf("\n");
}

void limpaTela()
{
    fflush(stdin);
    system("cls || clear");
}

struct informacoes
{
    char nome[999];
    float preco;
    int quantidade;
};

void cadastroProdutos()
{
    
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int j;
    int codigo;
    int contador = 0;
    
    struct informacoes produto[999];

    cabecalho();
    

    printf("\n=====================\n");
    printf("\tMENU");
    printf("\n=====================\n");

    do
    {
        printf("\n(1) - Realizar uma compra");
        printf("\n(2) - Consultar estoque");
        printf("\n(3) - Sair do programa\n");

        printf("\nDigite a opção desejada: ");
        scanf("%d", &codigo);
        
        switch (codigo)
        {
        case 1:

            printf("\nDigite o nome do %dº produto: ", contador + 1);
            scanf("%s", &produto[contador].nome);

            contador++;

            break;
        
        case 2:
            printf("\n")
            break;
        
        case 3:
            break;
        
        default:
            printf("\nOpção inválida! Digite novamente.");
            printf("\n");
            break;
        }

    limpaTela();

    } while (codigo != 3);
    

    cabecalho();



    return 0;
}