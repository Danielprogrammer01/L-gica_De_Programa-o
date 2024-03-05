Algoritmo "semnome"

Var

   nomeProduto: caracter
   quantidade: real
   precoUnitario: real
   valorTotal: real
   desconto: real
   totalAPagar: real

Inicio

   escreval("======================================")
   escreval("             7ª QUESTÃO               ")
   escreval("======================================")
   escreval("")

   // Solicidando dados ao usuario.

   escreva("Nome do produto: ")
   leia ( nomeProduto)
   escreval("")

   escreva("Quantidade: ")
   leia (quantidade)
   escreval("")

   escreva("Preço Unitário: ")
   leia (precoUnitario)
   escreval("")
   limpatela

   // Calculando o valor total

   valorTotal <- quantidade * precoUnitario

   // Calculando o desconto.

   se quantidade <= 5 entao
      desconto <- valorTotal * (2/100)
   senao
      se (quantidade > 5) e (quantidade <= 10) entao
         desconto <- valorTotal * (3/100)
      senao
         desconto <- valorTotal * (5/100)
      fimse
   fimse

   // Calculando o total a pagar.

   totalAPagar <- valorTotal - desconto

   // Exibindo o resultado para o usuário.

   escreval("======================================")
   escreval("             7ª QUESTÃO               ")
   escreval("======================================")
   escreval("")
   escreval("RESPOSTA:")
   escreval("")

   escreval("Total: R$ ", valorTotal:2:2)
   escreval("")

   escreval("Desconto: R$", desconto:2:2)
   escreval("")

   escreval("Total a pagar: R$ ", TotalAPagar:2:2)


Fimalgoritmo
