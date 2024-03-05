Algoritmo "semnome"


Var

   operacao: caracter
   resultado: real
   n1: real
   n2: real

Inicio

   //Solicitando dados ao usuário.

   escreva("Digite um número: ")
   leia(n1)
   escreval("")
   escreva("Digite outro número: ")
   leia(n2)
   escreval("")
   escreval("Escolha uma operação matemática: ")
   escreval("")
   escreval("( + ) Adição")
   escreval("( - ) Substituição")
   escreval("( * ) Multiplicação")
   escreval("( / ) Divisão")
   escreval("")
   escreva("Digite o sinal da operação escolhida: ")
   leia(operacao)
   escreval("")
   limpatela

   // Calculando e Exibindo o resultado.

   escolha operacao

   caso "+"

      resultado <- n1 + n2
      escreval("Resultado da soma: ", resultado)

   caso "-"

      resultado <- n1 - n2
      escreval("Resultado da subtração: ", resultado)

   caso "*"

      resultado <- n1 * n2
      escreval("Resultado da multiplicação: ", resultado)

   caso "/"

      resultado <- n1 / n2
      escreval("Resultado da divisão: ", resultado)
   fimescolha


Fimalgoritmo
