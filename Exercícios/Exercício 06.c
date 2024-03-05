#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {

    setlocale(LC_ALL,"portuguese");   

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if (idade >= 18 && idade <=65 )
    {
        printf("\nVocê é obrigado a votar!");
    }
    else
    {
        printf("\nVocê NÃO é obrigado a votar!");
    }
    

return 0;
}