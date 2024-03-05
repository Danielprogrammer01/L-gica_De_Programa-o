Algoritmo "semnome"

Var

   n: inteiro
   numero: real
   soma: real
   somaPar: real
   quantidadePar: inteiro
   quantidadeImpar: inteiro
   mediaGeral: real
   mediaPar: real

Inicio

   numero <- 1

   enquanto (numero <> 0) faca

      n <- n + 1

      escreva("Digite o",n,"º número:")
      leia(numero)
      escreval("")

      se(numero % 2 = 0)entao
         quantidadePar <- quantidadePar + 1
         somaPar <- somaPar + numero
      senao
         quantidadeImpar <- quantidadeImpar + 1
      fimse

      soma <- soma + numero

   fimenquanto

   mediaPar <- somaPar / quantidadePar
   mediaGeral <- soma / n

   escreval("Quantidade de números PARES: ",quantidadePar)
   escreval("")
   escreval("Quantidade de números ÍMPARES:", quantidadeImpar)
   escreval("")
   escreval("MÉDIA dos PARES: ", mediaPar)
   escreval("")
   escreval("MÉDIA GERAL: ", mediaGeral)
   
Fimalgoritmo