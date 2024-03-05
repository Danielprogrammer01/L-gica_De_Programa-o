#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main(){

setlocale(LC_ALL,"portuguese");

int i;
int n;

printf("Digite o número da tabuada: ");
scanf("%d", &n);
printf("\n");

for ( i = 1; i <= 10; i++)
{
    printf("%d x %d = %d\n",n,[i,n*i);
}


return 0;
}