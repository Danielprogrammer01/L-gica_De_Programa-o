#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

/*Crie uma fun√ß√£o chamada "calcularMedia" que recebe como par√¢metro uma struct "Aluno",
esta struct ter√° informa√ß√µes como: nome, data de nascimento, duas notas e m√©dia e retorna a m√©dia das notas.
Em seguida, crie um programa que declare um array de 5 alunos e utilize a fun√ß√£o "calcularMedia" para imprimir a m√©dia de cada aluno.
Tamb√©m crie uma fun√ß√£o para verificar se um aluno est√° aprovado ou reprovado sendo necess√°rio m√©dia maior ou igual a 7,0 para aprova√ß√£o.*/

#define quantidadeAlunos 3
#define quantidadeNotas 2

struct alunos
{

    char nome[301];
    char dataNascimento[301];
    float notas[quantidadeNotas];
    float media;
    char aprovacao[301];
};

struct dados_alunos
{
    struct alunos Alunos[quantidadeAlunos];
};

void limpaTela()
{

    fflush(stdin);
    system("cls || clear");
}

struct dados_alunos coletaAlunos(struct dados_alunos study)
{

    int i, j;

    printf("\t=== Coleta de dados dos alunos ===\n\n");

    for (i = 0; i < quantidadeAlunos; i++)
    {

        fflush(stdin);
        printf("Insira o nome do %d∞ aluno:\n", i + 1);
        gets(study.Alunos[i].nome);
        fflush(stdin);

        fflush(stdin);
        printf("Insira a data de nascimento de %s:\n", study.Alunos[i].nome);
        gets(study.Alunos[i].dataNascimento);
        fflush(stdin);

        for (j = 0; j < quantidadeNotas; j++)
        {

            do
            {

            printf("Digite a %d™ nota de %s:\n", j + 1, study.Alunos[i].nome);
            scanf("%f", &study.Alunos[i].notas[j]);

            if ((study.Alunos[i].notas[j] < 0) || (study.Alunos[i].notas[j] > 10))
            {

                printf("\nNota inv·lida, digite novamente!\n\n");

            }
         
            } while ((study.Alunos[i].notas[j] < 0) || (study.Alunos[i].notas[j] > 10));
            
        }

        printf("\n");
    }

    return study;
}

struct dados_alunos calcularMedia(struct dados_alunos students)
{

    float somaNotas = 0;
    int i, j;

    for (i = 0; i < quantidadeAlunos; i++)
    {

        for (j = 0; j < quantidadeNotas; j++)
        {

            somaNotas += students.Alunos[i].notas[j];
        }

        students.Alunos[i].media = somaNotas / quantidadeNotas;
        somaNotas = 0;
    }

    return students;
}

void situacaoAluno(struct dados_alunos situacao)
{

    int i, j;

    printf("\t=== DivulgaÁ„o dos resultados ===\n\n");

    for (i = 0; i < quantidadeAlunos; i++)
    {

        printf("Nome do %d∞ aluno: %s\n", i + 1, situacao.Alunos[i].nome);
        printf("Data de nascimento do %d∞ aluno: %s\n", i + 1, situacao.Alunos[i].dataNascimento);

        for (j = 0; j < quantidadeNotas; j++)
        {

            printf("%d™ nota do %d∫ aluno: %.2f\n", j + 1, i + 1, situacao.Alunos[i].notas[j]);
        }

        printf("MÈdia do %d∫ aluno: %.2f\n", i + 1, situacao.Alunos[i].media);

        if (situacao.Alunos[i].media >= 7.0)
        {
            strcpy(situacao.Alunos[i].aprovacao, "Aprovado!");
        }
        else if(situacao.Alunos[i].media >= 5.0)
        {
            strcpy(situacao.Alunos[i].aprovacao, "Em recuperaÁ„o!");
        }
        else
        {
            strcpy(situacao.Alunos[i].aprovacao, "Rerovado!");
        }

        printf("SituaÁ„o do %d∞ aluno: %s", i + 1, situacao.Alunos[i].aprovacao);
        printf("\n\n");
    }
}

int main()
{

    setlocale(LC_ALL, "portuguese");

    struct dados_alunos decentes;

    decentes = coletaAlunos(decentes);

    decentes = calcularMedia(decentes);

    limpaTela();

    situacaoAluno(decentes);

    return 0;
}