#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main(){

setlocale(LC_ALL,"portuguese");

int i;
int j;

for ( j = 2; j <=10; j++)
{
    for (i = 1; i <= 10; i++)
        {
        printf("%d x %d = %d\n", j, i, j*i);
        }
        printf("\n");
}

return 0;

}