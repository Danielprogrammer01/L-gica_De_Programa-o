#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define quantidadeDeNotas 4
#define quantidadeDeAlunos 3

struct dados_pessoais{
  
  char nome[200];
  float notas[quantidadeDeNotas];
  float media;
};

int main(){
    
    setlocale(LC_ALL, "portuguese");
    
    int i;
    int j;
    char situacao[200];
    float somaDasNotas = 0.0;
    struct dados_pessoais aluno[quantidadeDeAlunos];
    
    for(i=0; i<quantidadeDeAlunos; i++)
    {
        setbuf(stdin, 0);
        
        printf("\nDigite o nome do %dº aluno: ", i+1);
        gets(aluno[i].nome);
        
        for(j=0; j<quantidadeDeNotas;j++)
        {
            
            do
            {
                
            printf("\nDigite a %dª nota: ", j+1, aluno[i].nome);
            scanf("%f", &aluno[i].notas[j]);
            
            if(aluno[i].notas[j] < 0.0 || aluno[i].notas[j] > 10.0)
            {
                
                printf("\nNota inválida! Digite novamente.");
                printf("\n");
                
            }
            
                
            } while (aluno[i].notas[j] < 0.0 || aluno[i].notas[j] > 10.0);
            
        somaDasNotas += aluno[i].notas[j];
        setbuf(stdin, 0);
        }
        
        aluno[i].media = somaDasNotas / quantidadeDeNotas;
        somaDasNotas = 0.0;
        
        system("cls || clear");

    }
    
    system("cls || clear");
    
    for(i=0; i<quantidadeDeAlunos; i++)
    {
        printf("\nNome do %dº aluno: %s ", i+1, aluno[i].nome);
        printf("\n");
        
        for(j=0; j<quantidadeDeNotas;j++)
        {
            
        printf("\n%dª nota: %.1f", j+1, aluno[i].notas[j]);

        }
        
        printf("\nMédia: %.1f", aluno[i].media);
        
        if (aluno[i].media >= 7.0)
        {
            strcpy(situacao,"APROVADO!");
        }
        else if (aluno[i].media >= 5.0)
        {
            strcpy(situacao,"EM RECUPERAÇÃO!");
        }
        else
        {
            strcpy(situacao,"REPROVADO!");
        }
        
        printf("\nSituação do aluno: %s", situacao);
        
        printf("\n");
    }
    
    
    return 0;
}
