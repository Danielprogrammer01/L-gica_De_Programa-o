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

        printf("                                                       \n");
        printf("|=====================================================|\n");
        printf("|                     M E N U                         |\n");
        printf("|=====================================================|\n");
        printf("|        CÓDIGO          |          DESCRIÇÃO         |\n");
        printf("|------------------------|----------------------------|\n");
        printf("|                        |                            |\n");
        printf("|          1             |       Adicionar Grupo      |\n");
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
            
                printf("\nQuantas pessoas serão cadastradas? ");
                scanf("%d", &pessoas);
                system("cls || clear");
                
                for ( i = 1; i <= pessoas; i++)
                {   

                    printf("\n=============================");
                    printf("\n         %dª PESSOA          ", i);
                    printf("\n=============================");
                    printf("\nDigite a idade: ", i);
                    scanf("%d", &idade);

                    maiorIdade = idade > maiorIdade ? idade : maiorIdade;
                    menorIdade = idade < menorIdade ? idade : menorIdade;
                    
                    fflush(stdin);

                    printf("\nDigite o sexo (M ou F): ");
                    scanf("%c", &sexo);
                    sexo = toupper(sexo);

                    printf("\nDigite o salário: R$");
                    scanf("%f", &salario);

                    printf("\n");

                    salarioTotal += salario;
                    
                    if (sexo == 'F' && salario > 5000)
                    {
                        mulheresSalario5K++;
                    }
    
                }
                
                    break;
            
            case 2:
            
                mediaSalarial = salarioTotal / pessoas;
                
                if (pessoas > 0)
                {
                    system("cls || clear");
                    printf("\nRESULTADO DA PESQUISA");
                    printf("\n");
                    printf("\nMédia Salarial do Grupo: R$ %.2f", mediaSalarial);
                    printf("\nMaior idade: %d anos", maiorIdade);
                    printf("\nMenor idade: %d anos", menorIdade);
                    printf("\nMulheres com salário acima de R$ 5000,00: %d \n", mulheresSalario5K);
                    
                }
                else
                {
                    codigo = 1;
                    break;
                }
                
                    break;
            
            default:

                printf("Opção Inválida! Digite o código novamente.");

                break;
        }   


    } while (codigo != 2);



}
