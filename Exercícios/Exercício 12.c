#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    int numeroDoMes;
    char mes[250];

    printf("Digite o número do mês: ");
    scanf("%d", &numeroDoMes);

    switch (numeroDoMes)
    {
    case 1:
        strcpy(mes,"Janeiro");
        break;
    case 2:
        strcpy(mes,"Fevereiro");
        break;
    case 3:
        strcpy(mes,"Março");
        break;
    case 4:
        strcpy(mes,"Abril");
        break;
    case 5:
        strcpy(mes,"Maio");
        break;
    case 6:
        strcpy(mes,"Junho");
        break;
    case 7:
        strcpy(mes,"Julho");
        break;
    case 8:
        strcpy(mes,"Agosto");
        break;
    case 9:
        strcpy(mes,"Setembro");
        break;
    case 10:
        strcpy(mes,"Outubro");
        break;
    case 11:
        strcpy(mes,"Novembro");
        break;
    case 12:
        strcpy(mes,"Dezembro");
        break;

    default:
        break;
    }

    printf("%s",mes);

    return 0;
}