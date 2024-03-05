#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

    setlocale (LC_ALL,"portuguese");   

    int numero;

    for ( numero = 1; numero <= 15; numero+=2)
    {
        printf("%d\n", numero);
    }
    
    return 0;

}