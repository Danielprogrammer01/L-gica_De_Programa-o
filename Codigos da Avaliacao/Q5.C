#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    char nome[999] [999];
    char telefone [999] [999];
    int codigo;
    int contador;
    int i;
    
   do
   {
    
   printf("\n====MENU====");
   printf("\n");
   printf("\n(1) - Adicionar um novo contato");
   printf("\n(2) - Mostrar números cadastrados e fechar agenda");
   printf("\n");
   printf("\nDigite a opção desejada: ");
   scanf("%d", &codigo);
    setbuf(stdin, 0);
   
   switch (codigo)
   {
       case 1:
       
        system ("cls || clear");
        
        printf("\nDigite um nome: ");
        gets(nome[contador]);
        
        printf("\nDigite um número de telefone: ");
        gets(telefone[contador]);
        
        system ("cls || clear");
        
        printf("\nContato cadastrado com sucesso!\n");

        contador++;
        
        break;
   
       case 2:
        
        system ("cls || clear");
        
            if(contador == 0)
            {
                
                printf("Você não possui nenhum contato cadastrado.");    
                printf("\n");
            }
            
        break;
   
       default:
       
        system ("cls || clear");
        printf("\nOpção inválida! Digite novamente.");
        printf("\n");
        
        break;
       
        system ("cls || clear");
   }
   
   } while (codigo != 2);
   
   
    for(i = 0; i < contador; i++)
    {
        
        printf("\nNome do %dº contato: %s", i+1, nome[i]);
        printf("\nTelefone: %s", telefone[i]);
        printf("\n");
        
    }

    
    return 0;
}
