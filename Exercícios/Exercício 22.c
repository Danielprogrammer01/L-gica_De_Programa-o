#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

    setlocale (LC_ALL,"portuguese");

    int i;
    float nota;
    float soma = 0.0;
    float media;
    char situacao[250];

        for ( i = 1; i < 3; i++)
        {

            do
            {
                printf("\nDigite a %dª nota: ", i);
                scanf("%f",&nota);    

                if (nota < 0.0 || nota > 10.0)
                {
                    printf("\nNota inválida! Digite novamente.\n");
                }
                
            } while (nota < 0.0 || nota > 10.0);

            soma += nota;
            media = soma / i;
            
            if (media >= 7.0)
            {
                strcpy(situacao, "Aprovado!");
            }
            else if (media >= 5.0)
            {
                strcpy(situacao, "Em recuperação!");
            }
            else
            {
                strcpy(situacao, "Reprovado!");
            }

        }

    printf("\nMédia: %.1f\n",media);
    printf("\nSituação: %s",situacao);

    return 0;

}