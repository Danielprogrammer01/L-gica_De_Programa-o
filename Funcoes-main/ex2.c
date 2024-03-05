#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define quantidadeDeAlunos 2
#define quantidadeDeNotas 2

struct dados_pessoais
{

    char nome[200];
    char dataDeNascimento[3][200];
    float nota[quantidadeDeNotas];
    float media;
    char situacao[200];
};

struct aluno
{

    struct dados_pessoais aluno[quantidadeDeAlunos];
};

struct aluno armazenarDados(struct aluno aluno)
{
    int i;
    int j;

    for (i = 0; i < quantidadeDeAlunos; i++)
    {
        fflush(stdin);

        printf("\nDigite o nome do %dº aluno: ", i + 1);
        gets(aluno.aluno[i].nome);

        printf("\nDigite a data de nascimento de %s: ", aluno.aluno[i].nome);

        printf("\nData: ");
        gets(aluno.aluno[i].dataDeNascimento[0]);

        printf("\nMês: ");
        gets(aluno.aluno[i].dataDeNascimento[1]);

        printf("\nAno: ");
        gets(aluno.aluno[i].dataDeNascimento[2]);

        for (j = 0; j < quantidadeDeNotas; j++)
        {
            do
            {

                printf("\nDigite a %dª nota: ", j + 1);
                scanf("%f", &aluno.aluno[i].nota[j]);

                fflush(stdin);

                if (aluno.aluno[i].nota[j] < 0.0 || aluno.aluno[i].nota[j] > 10.0)
                {
                    printf("\nNota inválida! Digite Novamente.\n");
                }

            } while (aluno.aluno[i].nota[j] < 0.0 || aluno.aluno[i].nota[j] > 10.0);
        }
    }

    return aluno;
}

struct aluno calcularMedia(struct aluno calculo)
{
    float somaDasNotas = 0.0;
    int i;
    int j;

    for (i = 0; i < quantidadeDeNotas; i++)
    {
        for (j = 0; j < quantidadeDeNotas; j++)
        {
            somaDasNotas += calculo.aluno[i].nota[j];
        }

        calculo.aluno[i].media = somaDasNotas / quantidadeDeNotas;
        somaDasNotas = 0.0;
    }

    return calculo;
}

void situacaoDoAluno(struct aluno situacao)
{
    int i;
    int j;

    for (i = 0; i < quantidadeDeAlunos; i++)
    {
        printf("\nNome do %dº aluno: %s ", i + 1, aluno.aluno[i].nome);

        printf("\nData de nascimento: %s/%s/%s", aluno.aluno[i].dataDeNascimento[0], aluno.aluno[i].dataDeNascimento[1], aluno.aluno[i].dataDeNascimento[2]);

        for (j = 0; j < quantidadeDeNotas; j++)
        {
            printf("\n%dª nota: %.1f", j + 1, aluno.aluno[i].nota[j]);
        }

        printf("Média: %.2f\n", i + 1, situacao.aluno[i].media);

        if (situacao.aluno[i].media >= 7.0)
        {
            strcpy(situacao.aluno[i].situacao, "Aprovado!");
        }
        else if (situacao.Alunos[i].media >= 5.0)
        {
            strcpy(situacao.aluno[i].situacao, "Em recuperação!");
        }
        else
        {
            strcpy(situacao.aluno[i].situacao, "Rerovado!");
        }

        printf("\nSituação: %s", i + 1, situacao.aluno[i].situacao);
        printf("\n\n");
    }

    return situacao;
}

int main()
{

    struct aluno aluno;

    aluno = armazenarDados(aluno);

    aluno = calcularMedia(aluno);

    system("cls || clear");

    situacaoDoAluno(aluno);

    return 0;
}