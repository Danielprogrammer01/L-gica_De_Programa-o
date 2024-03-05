#include <stdio.h>
#include <stdlib.h>

int main() {

    int A, B, soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro valor:\n");
    scanf("%d", &A);

    printf("Digite o segundo valor:\n");
    scanf("%d", &B);

    soma = A + B;
    subtracao = A - B;
    multiplicacao = A * B;
    divisao = A / B;

    printf("Resultados:\n");

    printf("Soma:%d\n", soma);
    printf("Subtração:%d\n", subtracao);
    printf("Multiplicação:%d\n", multiplicacao);
    printf("Divisão:%d\n", divisao);
}