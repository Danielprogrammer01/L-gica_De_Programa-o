/* ExercC-cio 1: 
VocC* C) um desenvolvedor de jogos e estC! trabalhando em um novo jogo de aventura.
O jogo tem um sistema de clima que depende da temperatura externa. 
Se a temperatura for superior a 25 graus Celsius, o clima serC! ensolarado. 
Se a temperatura for inferior a 15 graus Celsius, o clima serC! chuvoso. 
Se a temperatura estiver entre 15 e 25 graus Celsius, o clima serC! nublado.*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>



int
main ()
{

  setlocale (LC_ALL, "portuguese");

  int temperatura;

  printf ("\t\t\t\t\t\t\t*Jogo de aventura*\n\n\n");

  printf ("Insira a temperatura externa em °C: \n");
  scanf ("%d", &temperatura);
  system ("cls || clear");
  printf ("Temperatura inserida: %d° \n", temperatura);

  if (temperatura > 25)
    {

      printf ("O clima está! ensolarado! \n");
    }
  else if (temperatura < 15)
    {
      printf ("O clima está! chuvoso! \n");
    }
  else
    {
      printf ("O clima está! nublado! \n");
    }

  return 0;
}
