#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

    setlocale(LC_ALL,"portuguese");   

    int valor1 = 0;
    int valor2 = 0;
    int soma = 0;
    int produto = 0;
    int menorValor = 0;
    int maiorValor = 0;
    float media;


    printf("Digite o 1º valor: ");
    scanf("%d", &valor1);

    printf("Digite o 2º valor: ");
    scanf("%d", &valor2);

    system ("cls || clear"); 

    soma = valor1 + valor2;
    produto = valor1 * valor2;
    media =  (valor1 + valor2) / 2.0;
    
    printf("Média: %.1f \n", media);

    printf("Soma: %d\n", soma);

    printf("Produto: %d\n", produto);
    
    // OPERAÇÃO TERNÁRIA

    // maior = valor1 > valor2 ? valor1 : valor2
    // menor = valor1 < valor2 ? valor1 : valor2
    
    if (valor1 > valor2)
    {
        printf("Maior valor: %d \n", valor1);
        printf("Menor valor: %d \n", valor2); 
    }
    else if (valor1 < valor2)
    {
        printf("Maior valor: %d \n", valor2);
        printf("Menor valor: %d \n", valor1);
    }
    else
    {
        printf("Maior valor: - \n");
        printf("Menor valor: - \n");
        printf("OS VALORES SÃO IGUAIS!\n");    
    }

    return 0;
}
