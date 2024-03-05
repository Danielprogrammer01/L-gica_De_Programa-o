#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int pessoas;
    int i;
    int idade;
    int maiorIdade;
    int menorIdade = 300;
    int mulheresSalario5K;
    int codigo;
    char sexo;
    float salario;
    float salarioTotal;
    float mediaSalarial;

    
    do
    {
        printf("\n-------------------------------------------------------");
        printf("\n            ENTREVISTA SALARIAL DA EMPRESA             ");
        printf("\n-------------------------------------------------------");
        printf("\n");
        printf("|=====================================================|\n");
        printf("|                     M E N U                         |\n");
        printf("|=====================================================|\n");
        printf("|        CÓDIGO          |          DESCRIÇÃO         |\n");
        printf("|------------------------|----------------------------|\n");
        printf("|                        |                            |\n");
        printf("|          1             |       Adicionar Pessoa     |\n");
        printf("|                        |                            |\n");
        printf("|          2             |  Sair e Exibir Resultados  |\n");
        printf("|                        |                            |\n");
        printf("|=====================================================| \n");

        printf("\nDigite a opção desejada: ");
        scanf("%d", &codigo);
        system("cls || clear");


        switch (codigo)
        {
            
            case 1:

        printf("\n-------------------------------------------------------");
        printf("\n            ENTREVISTA SALARIAL DA EMPRESA             ");
        printf("\n-------------------------------------------------------");

                    pessoas++;
                    
                    if (pessoas > 1)
                    {
                    printf("\n=======================================================");
                    printf("\n                 Dados da %dª pessoa                   ", pessoas);
                    printf("\n=======================================================");
                    printf("\nDigite a idade: ");
                    scanf("%d", &idade);
                    }
                    else
                    {
                    printf("\n=======================================================");
                    printf("\n                   Dados da pessoa                     ", pessoas);
                    printf("\n=======================================================");

                    printf("\nDigite a idade: ");
                    scanf("%d", &idade);
                    }
                
                    maiorIdade = idade > maiorIdade ? idade : maiorIdade;
                    menorIdade = idade < menorIdade ? idade : menorIdade;
                    
                    fflush(stdin);

                    printf("\nDigite o sexo (M ou F): ");
                    scanf("%c", &sexo);
                    sexo = toupper(sexo);

                    printf("\nDigite o salário: R$");
                    scanf("%f", &salario);

                    system("cls || clear");
                    printf("\n");
                    

                    salarioTotal += salario;
                    
                    if (sexo == 'F' && salario > 5000)
                    {
                        mulheresSalario5K++;
                    }

                    break;
            
            case 2:
            
                mediaSalarial = salarioTotal / pessoas;
                
                if (pessoas > 0)
                {
                    system("cls || clear");
                    printf("\nRESULTADO DA PESQUISA");
                    printf("\n");
                    printf("\nM?dia Salarial do Grupo: R$ %.2f", mediaSalarial);
                    printf("\nMaior idade: %d anos", maiorIdade);
                    printf("\nMenor idade: %d anos", menorIdade);
                    printf("\nMulheres com salário acima de R$ 5000,00: %d", mulheresSalario5K);
                    printf("\nPessoas entrevistadas: %d \n", pessoas);
                    
                }
                else
                {
                    codigo = 1;
                    break;
                }
                
                    break;
            
            default:

                printf("Oção Inválida! Digite o código novamente.");

                break;
        }   


    } while (codigo != 2);

}

