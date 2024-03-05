#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float notas[3];

    printf("Digite a 1ª nota: ");
    scanf("%f", &notas[0]);

    printf("Digite a 2ª nota: ");
    scanf("%f", &notas[1]);

    printf("Digite a 3ª nota: ");
    scanf("%f", &notas[2]);

    printf("\nMostrando notas:\n");
    printf("\n1ª Nota: %.1f\n", notas[0]);
    printf("2ª Nota: %.1f\n", notas[1]);
    printf("3ª Nota: %.1f\n", notas[2]);

    return 0;
}