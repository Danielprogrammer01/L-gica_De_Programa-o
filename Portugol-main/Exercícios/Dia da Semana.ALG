Algoritmo "semnome"

Var

   n: inteiro
   dia: caracter

Inicio


   //Solicitando dados ao usuário.

   escreva("Digite o número do dia: ")
   leia(n)
   limpatela

   //Calculando o resultado.

   escolha n

   caso 1

      escreval("Dia 01 é domingo, portanto, é final de semana!")

   caso 2

      escreval("Dia 02 é  segunda-feira, portanto, é dia útil!")

   caso 3

      escreval("Dia 03 é  terça-feira, portanto, é dia útil!")

   caso 4

      escreval("Dia 04 é quarta-feira, portanto, é dia útil!")

   caso 5

      escreval("Dia 05 é quinta-feira, portanto, é dia útil!")

   caso 6

      escreval("Dia 06 é sexta-feira, portanto, é dia útil!")

   caso 7

      escreval("Dia 07 é sábado, portanto, é final de semana!")

   outrocaso

      escreval("Dia",n, " é INVÁLIDO!")
      
fimescolha


Fimalgoritmo