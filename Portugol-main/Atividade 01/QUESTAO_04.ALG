Algoritmo "semnome"

Var

   precoPorQuiloMorango: real
   precoPorQuiloMaca: real
   pesoMorango: real
   pesoMaca: real
   valorMorango: real
   valorMaca: real
   pesoTotal: real
   valorTotal: real
   desconto: real

Inicio

   escreval("======================================")
   escreval("             4ª QUESTÃO               ")
   escreval("======================================")
   escreval("")

   // Solicidando dados ao usuario.

   escreval("Quantos quilos de morango você deseja?")
   leia (pesoMorango)
   escreval("")

   escreval("E quantos quilos de maça?")
   leia (pesoMaca)
   limpatela

   // Determinando o preço do quilo das frutas.

   // Morango.

   se pesoMorango > 5 entao
      precoPorQuiloMorango <- 2.20
   senao
      precoPorQuiloMorango <- 2.50
   fimse

   // Maça.

   se pesoMaca > 5 entao
      precoPorQuiloMaca <- 1.50
   senao
      precoPorQuiloMaca <- 1.80
   fimse

   // Calculando o valor das frutas.

   valorMorango <- pesoMorango * precoPorQuiloMorango

   valorMaca <- pesoMaca * precoPorQuiloMaca

   // Calculando o peso total e o valor total.

   pesoTotal <- pesoMorango + pesoMaca

   valorTotal <- valorMorango + valorMaca

   // Calculando o desconto.

   desconto <- valorTotal * (10/100)
   
   se (pesoTotal > 8) ou (valorTotal > 25) entao
      valorTotal <- valorMorango + valorMaca - desconto
   fimse

   // Exibindo o resultado para o usuário.

   escreval("======================================")
   escreval("             4ª QUESTÃO               ")
   escreval("======================================")
   escreval("")
   escreval("RESPOSTA:")
   escreval("")
   escreva("Quantidade de Morangos:", pesoMorango, "Kg")
   escreval(" .......... Preço por Kg: R$", precoPorQuiloMorango:2:2)
   escreval("")
   escreva("Quantidade de Maças:", pesoMaca, "Kg")
   escreval(" ............. Preço por Kg: R$", precoPorQuiloMaca:2:2)
   escreval("")
   escreval("Desconto: R$", desconto:2:2)
   escreval("")
   escreval("Valor a pagar: R$", ValorTotal:2:2)

Fimalgoritmo
