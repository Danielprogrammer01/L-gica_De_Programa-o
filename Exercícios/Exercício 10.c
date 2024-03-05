#include <stdio.h>
#include <stdlib.h>

int main(){

int code;
float value;
char dish [250];

printf("|================================================|\n");
printf("|                     M E N U                    |\n");
printf("|================================================|\n");
printf("|    CODE   |          DISH         |    VALUE   |\n");
printf("|================================================|\n");
printf("|     1     |      Rump Steak       |   $25.00   |\n");
printf("|     2     |        Lasagna        |   $20.00   |\n");
printf("|     3     |     Beef and Cream    |   $18.00   |\n");
printf("|     4     |   Steak with onions   |   $15.00   |\n");
printf("|     5     |     Bread with egg    |   $5.00    |\n");
printf("|================================================|\n");

printf("Enter the dish code: ");
scanf("%d", &code);

switch (code)
{
case 1:
    strcpy(dish, "Rump Steak");
    value = 25.00;
    break;

case 2:
    strcpy(dish, "Lasagna");
    value = 20.00;
    break;

case 3:
   strcpy(dish, "Beef and Cream ");
    value = 18.00;
    break;

case 4:
    strcpy(dish, "Steak with onions");
    value = 15.00;
    break;

case 5:
    strcpy(dish, "Bread with egg"); 
    value = 5.00;
    break;

default:
    printf("Invalid option!");
    break;
}

system ("cls || clear");

printf("\nName of the dish: %s\n", dish);
printf("Value: $%.2f", value);

return 0;
}