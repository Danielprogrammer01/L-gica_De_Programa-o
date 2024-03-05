#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct informacoes {
  
  char nomeDoLivro[200];
  char autor[200];
  char categoria[200];
  float preco;
  
};

float calculandoPreco(struct informacoes livro)
{
    
    float desconto;
    
    desconto = livro.preco * 0.1;
    
    livro.preco = livro.preco - desconto;
    
    return livro.preco;
    
}

int main(){
    
    setlocale(LC_ALL,"portuguese");
    
    float precoFinal;
    struct informacoes livro;
    
    
    printf("Digite o nome do livro: ");
    gets(livro.nomeDoLivro);
    
    printf("Digite o nome do autor: ");
    gets(livro.autor);
    
    printf("Digite a categoria do livro: ");
    gets(livro.categoria);
    
    printf("Digite o preço: ");
    scanf("%f", &livro.preco);
    
    system("cls || clear");
    
    precoFinal = calculandoPreco(livro);
    
    printf("\nINFORMAÇÕES DO LIVRO\n");
    
    printf("\nNOME: %s", livro.nomeDoLivro);
    printf("\nAUTOR: %s", livro.autor);
    printf("\nCATEGORIA: %s", livro.categoria);
    printf("\nPREÇO C/ DESCONTO: R$ %.2f", precoFinal);

    
}
