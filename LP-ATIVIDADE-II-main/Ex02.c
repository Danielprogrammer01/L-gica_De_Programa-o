#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

    int main(){

        setlocale(LC_ALL, "portuguese");

        int numero;
        float totalAPagar;
        float desconto;
        float valor = 0.0;
        char dia [250];

        printf("Digite o valor da compra: R$");
        scanf("%f", &valor);

        printf("\nSegunda-feira ( 1 )");
        printf("\nTerça-feira   ( 2 )");
        printf("\nQuarta-feira  ( 3 )");
        printf("\nQuinta-feira  ( 4 )");
        printf("\nSexta-feira   ( 5 )");
        printf("\nSábado        ( 6 )");
        printf("\nDomingo       ( 7 )\n");
        
        printf("\nDigite o número correspondente ao dia da semana: ");
        scanf("%d", &numero);

        switch (numero)
        {
        case 1:
            
            strcpy(dia, "Dia de semana");
            break;

        case 2:
            
            strcpy(dia, "Dia de semana");
            break;

        case 3:
            
            strcpy(dia, "Dia de semana");
            break;

        case 4:
            
            strcpy(dia, "Dia de semana");
            break;

        case 5:
            
            strcpy(dia, "Dia de semana");
            break;

        case 6:

            strcpy(dia, "Final de semana");
            break;

        case 7:

            strcpy(dia, "Final de semana");
            break;
        
        default:
            break;
        }

        if (valor > 100 && strcmp(dia,"Dia de semana") == 0 )
        {
           desconto = valor * 10/100;
        }

        if (valor > 100 && strcmp(dia,"Final de semana") == 0 )
        {
            desconto = valor * 15/100;
        }


        totalAPagar = (valor) - desconto;
        
        printf("\nTipo do dia: %s", dia);
        printf("\nDesconto: R$ %.2f\n", desconto);
        printf("\nTotal a pagar: R$ %.2f\n", totalAPagar);


        return 0;
    }