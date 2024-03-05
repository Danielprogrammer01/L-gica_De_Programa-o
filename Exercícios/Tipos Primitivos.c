#include <stdio.h>
#include <stdlib.h>

int main(){

    // Declarando as variáveis.

    int idade = 18;  // Tipo inteiro
    float peso = 51.5; // Tipo real 
    float altura = 1.75;
    char sexo = 'M'; // Tipo caracter (Apenas 1 caracter)
    char nome [50] = "Daniel"; // Uma cadeia de caracters
    char sobrenome [50] = "Jorge"; 

    // Exibindo dados para o usuário.
    printf("Idade: %d anos. \n", idade);
    printf("Peso: %.2f Kg. \n", peso);
    printf("Altura: %.2f m. \n", altura);  
    printf("Sexo: %c. \n", sexo);
    printf("Nome: %s. \n", nome);
    printf("Sobrenome: %s. \n", sobrenome);

    return 0;
}