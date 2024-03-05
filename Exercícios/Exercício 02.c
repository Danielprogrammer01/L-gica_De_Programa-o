#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale(LC_ALL,"portuguese");   

char nome[250], sobrenome[250], situacao[250];
int idade;
float primeiraNota, segundaNota, terceiraNota, media;

printf("Digite seu nome: ");
gets(nome);

printf("Digite seu sobrenome: ");
gets(sobrenome);

printf("Digite sua idade: ");
scanf("%d", &idade);

printf("Digite a 1ª nota: ");
scanf("%f", &primeiraNota);

printf("Digite a 2ª nota: ");
scanf("%f", &segundaNota);

printf("Digite a 3ª nota: ");
scanf("%f", &terceiraNota);

system ("cls || clear");

media = (primeiraNota + segundaNota + terceiraNota) / 3;

if (media >= 7.0)
{
    strcpy(situacao,"APROVADO!"); // Atribuição de uma string à uma variável.
}
else
{
    strcpy(situacao,"REPROVADO!");
}

printf("Nome: %s %s \n\n", nome, sobrenome);
printf("Idade: %d \n\n", idade);
printf("Média: %.1f pontos\n\n", media);
printf("Situação do Aluno: %s \n\n", situacao);

return 0;

}