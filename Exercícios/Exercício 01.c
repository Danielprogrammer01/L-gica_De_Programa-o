#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL,"portuguese");   

    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 10) 
    {
        printf("O valor é MAIOR que 10!");
    }
    else if (numero < 10)
    {
        printf("O valor é MENOR que 10!");
    }
    else 
    {
        printf("O valor é IGUAL que 10!");
        }
    
    return 0;
}

// = Atibuição
// == Comparação
// != Diferente
// ! Negação