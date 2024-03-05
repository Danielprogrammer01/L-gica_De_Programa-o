#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

    setlocale (LC_ALL,"portuguese");

    int i;
    int nota;
    float media = 0;
    int soma;

    for (i = 1; i <= 2; i++)
    {
        
        do {

            printf("\nDigite a %dº nota do aluno:", i);
            scanf("%d",&nota);

            if (nota < 0 || nota > 10)
            {
            printf("\nNota inválida!\nDigite a nota novamente.\n");
            }

        } while (nota < 0 || nota > 10);
    
        soma += nota;
        media = soma / 2.0;

    }

    printf("\nMédia: %.1f\n", media);
    
    return 0;

}
