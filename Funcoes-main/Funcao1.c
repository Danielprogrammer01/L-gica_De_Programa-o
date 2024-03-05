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

int somar(int n1, int n2)
{
    int resultado;
    resultado = n1 + n2;
    return resultado;
}

/*
int somar(int n1, int n2)
{
    return n1 + n2;
}
*/

int main()
{
    setlocale(LC_ALL, "portuguese");


    
    return 0;
}