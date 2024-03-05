#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

// Declarando as variáveis.

int idade;
float peso;
char sexo;
char nome[250];
char sobrenome[250];

// Solicitando dados ao usuário.

printf("Digite sua idade: ");
scanf("%d", &idade);

printf("Digite seu peso: ");
scanf("%f", &peso);

fflush(stdin); // Limpa o cache de input.

printf("Digite seu sexo: ");
scanf("%s", &sexo);

fflush(stdin); // Limpa o cache de input.

printf("Digite seu nome: ");
gets(nome);

//Jeito mais seguro de armazenar dados na variável.

    //fgets(nome, 250, stdin);
    //nome[strcspn(nome,"\n")] = 0;

//scanf("%s", &nome); (OBS.: Só aceita 1 palavra)

fflush(stdin); // Limpa o cache de input.

printf("Digite seu sobrenome: ");
gets(sobrenome);

// Limpa tela (Limpa o terminal)
system("cls || clear");

// Exibindo dados para o usuário.

printf("Nome: %s. \n", nome);
printf("Sobrenome: %s. \n", sobrenome);
printf("Idade: %d anos. \n", idade);
printf("Peso: %.1f Kg. \n", peso);
printf("Sexo: %c. \n", sexo);


    return 0;
}