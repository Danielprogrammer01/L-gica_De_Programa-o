#include <stdio.h>
#include <stdlib.h>

int main(){

float numberOne, numberTwo, result;
char option;

printf("Enter the first number: ");
scanf("%f", &numberOne);

printf("\nEnter the second number: ");
scanf("%f", &numberTwo);

fflush(stdin);

printf("\nChoosen the mathematical operation:\n");
printf("\nType '+' to add");
printf("\nType '-' to subtract");
printf("\nType '*' to multiply");
printf("\nType '/' to split\n");
scanf("%c",&option);

switch (option)
{
case '+':
    result = numberOne + numberTwo;
    break;

case '-':
    result = numberOne + numberTwo; 
    break;

case '*':
    result = numberOne * numberTwo;
    break;

case '/':
    result = numberOne / numberTwo;
    break;

default:
    printf("Invalid option!");
    break;
}

system ("cls || clear");

printf("\n Firt number: %.1f", numberOne);

printf("\n Second number: %.1f", numberTwo);

printf("\n Chosen option: %.c", option);

printf("\n Result: %.1f", result);

return 0;



}