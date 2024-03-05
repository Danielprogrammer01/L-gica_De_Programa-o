#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 

{
setlocale(LC_ALL,"portuguese");

// Declarando as variáveis.

float primeiraNota, segundaNota, media;

// Solicitando dados ao usuário.

printf("Digite a primeira nota: ");
scanf("%f", &primeiraNota);

printf("Digite a segunda nota: ");
scanf("%f", &segundaNota);

media = (primeiraNota + segundaNota) / 2;

// Exibindo dados para o usuário.

printf("1ª Nota: %.1f \n", primeiraNota);
printf("2ª Nota: %.1f \n", segundaNota);
printf("Média: %.1f", media);

    return 0;
}