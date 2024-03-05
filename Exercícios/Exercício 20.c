#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

    setlocale (LC_ALL,"portuguese");

    int nota1;
    int nota2;
    float media = 0.0;

    do
    {
        
        printf("\nDigite a 1º nota do aluno:");
        scanf("%d",&nota1);

        printf("\nDigite a 2º nota do aluno:");
        scanf("%d",&nota2);

        if ((nota1 < 0 || nota1 > 10) || (nota2 < 0 || nota2 > 10))
        {
           printf("\nNota inválida!\nDigite a nota novamente.\n");
        }
     
    } while ((nota1 < 0 || nota1 > 10) || (nota2 < 0 || nota2 > 10));
    
    media = (nota1 + nota2) / 2.0;

    printf("\nMédia: %.1f\n", media);
    
    return 0;

}
