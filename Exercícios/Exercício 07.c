#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {

    setlocale(LC_ALL,"portuguese");   

    int numero1, numero2, numero3, maior, menor;

    printf("Digite o 1º número: ");
    scanf("%d", &numero1);
   
    printf("\nDigite o 2º número: ");
    scanf("%d", &numero2);
   
    printf("\nDigite o 3º número: ");
    scanf("%d", &numero3);

    system ("cls || clear");

    // OPERADOR TERNÁRIO
    
    // maior = numero1 > numero2 ? numero1 : numero2;
    // maior = maior > numero3 ? maior : numero3;
    
    // menor = numero1 < numero2 ? numero1 : numero2;
    // menor = menor < numero3 ? menor : numero3;

    
    if (numero1 > numero2 && numero1 > numero3)
    {
        maior = numero1;
    }
    else if (numero2 > numero1 && numero2 > numero3)
    {
        maior = numero2;
    }
    else
    {
        maior = numero3;
    }
   
      if (numero1 < numero2 && numero1 < numero3)
    {
        menor = numero1;
    }
    else if (numero2 < numero1 && numero2 < numero3)
    {
        menor = numero2;
    }
    else
    {
        menor = numero3;
    }

    printf("Numero maior: %d \n", maior);
    printf("Numero menor: %d \n", menor);

    return 0;
}