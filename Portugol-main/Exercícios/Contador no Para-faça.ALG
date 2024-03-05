Algoritmo "semnome"

Var

   n: inteiro
   numero: inteiro
   quantidadePar: inteiro
   quantidadeImpar: inteiro

Inicio

   para n de 1 ate 5 faca

      escreva("Digite o ", n , "º número: ")
      leia(numero)

      se (numero % 2 = 0) entao
         quantidadePar <- quantidadePar + 1
      senao
         quantidadeImpar <- quantidadeImpar + 1
      fimse

   fimpara

   escreval("")

   escreval("Números ímpares: ",quantidadeImpar)
   escreval("Números pares: ",quantidadePar)




Fimalgoritmo