Algoritmo "semnome"


Var

   quantidade: inteiro
   preco: real
   custo: real

Inicio

   // Solicitando a quantidade ao usuário.

   escreva("Quantas maças você deseja comprar? ")
   leia(quantidade)
   escreval("")

   // Determinando o preço das maças.

   se quantidade >= 12 entao
      preco <- 1
   senao
      preco <- 1.30
   fimse

   // Calculando o custo.

   custo <- quantidade * preco

   // Exibindo resultado.

   escreval("Custo total: R$", custo:2:2)







Fimalgoritmo