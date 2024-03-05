#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    int i;
    int pares;
    int impares;
    int quantidadeDeNumeros = 6; 
    int numero[quantidadeDeNumeros];
    
    for(i=0; i < quantidadeDeNumeros; i++)
    {
        
        printf("\nDigite o %dº número: ", i+1);
        scanf("%d", &numero[i]);
        
        if(numero[i] % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
        
    }
    
    system("cls || clear");
   
    printf("\nQuantidade de números PARES: %d", pares);
    printf("\nQuantidade de números IMPARES: %d", impares);
  
    
    return 0;
}