#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main(){

setlocale(LC_ALL,"portuguese");

char formaDePagamento [50];
float preco;
float precoFinal;
float desconto;
float precoPorParcela;
int opcao;
int parcelas;


printf("Digite o valor do produto: R$");
scanf("%f", &preco);

printf("\nEscolha a forma de pagamento\n");

printf("\n1 - Pagamento à  vista");
printf("\n2 - Pagamento à prazo \n");

printf("\nDigite a opção escolhida: ");
scanf("%d", &opcao);

switch (opcao)
{
    case 1:
        
        strcpy(formaDePagamento, "À vista");
        desconto = preco * 0.1;
        precoFinal = preco - desconto;
        
        system ("cls || clear");
        printf("\nValor do produto: R$ %.2f", preco);
        printf("\nForma de pagamento: %s", formaDePagamento);
        printf("\nValor do desconto: R$ %.2f", desconto);
        printf("\nTotal a pagar: R$ %.2f", precoFinal);
        
    break;

    case 2 :

        strcpy(formaDePagamento, "À prazo");

        do
        {
        printf("\nDigite a quantidade de parcelas: ");
        scanf("%d", &parcelas);
            
            if (parcelas > 6){
                printf("\nO parcelamento pode ser feito em até 6 vezes!");
                printf("\nDigite a quantidade de parcelas novamente.\n");
            }

        } while (parcelas > 6);

        precoFinal = preco;
        precoPorParcela = precoFinal / parcelas;    
        
        system ("cls || clear");
        printf("\nValor do produto: R$ %.2f", preco);
        printf("\nForma de pagamento: %s", formaDePagamento);
        printf("\nQuantidade de parcelas: %d", parcelas);
        printf("\nValor por parcela: R$ %.2f", precoPorParcela);
        printf("\nTotal a pagar: R$ %.2f\n", precoFinal);

    break;

    default:
        printf("\nOpção inválida!");
        break;
}

return 0;

}