Algoritmo "semnome"

Var

   combustivel: caracter
   quantidade: real
   preco: real
   desconto: real
   valorTotal: real
   totalAPagar: real

Inicio

   escreval("======================================")
   escreval("             10ª QUESTÃO              ")
   escreval("======================================")
   escreval("")

   // Solicidando dados ao usuario.

   escreval("Escolha o combustível")
   escreval("")
   escreval("A - Álcool")
   escreval("G - Gasolina")
   escreval("")
   escreva("Digite a letra do combustível: ")
   leia (combustivel)
   escreval("")

      // Determinando o preço de cada combustível.

      se (combustivel = "A") ou (combustivel = "a") entao
         combustivel <- "álcool"
         preco <- 3.79
      senao
         se (combustivel = "G") ou (combustivel = "g") entao
            combustivel <- "gasolina"
            preco <- 6.59
         fimse
      fimse

   escreval("Quantos litros de ", combustivel,"?")
   leia (quantidade)
   escreval("")
   limpatela

   // Calculando o valor total.

   valorTotal <- preco * quantidade

   // Calculando o desconto.

   se (combustivel = "álcool") e (quantidade <= 25) entao
      desconto <- valorTotal * (2/100)
   senao
      se (combustivel = "álcool") e (quantidade > 25) entao
         desconto <- valorTotal * (4/100)
      senao
         se (combustivel = "gasolina") e (quantidade <= 25) entao
            desconto <- valorTotal * (3/100)
         senao
            se (combustivel = "gasolina") e (quantidade > 25) entao
               desconto <- valorTotal * (5/100)
            fimse
         fimse
      fimse
   fimse

   // Calculando o total a pagar.

   totalAPagar <- valorTotal - desconto

   // Exibindo o resultado para o usuário.

   escreval("======================================")
   escreval("             10ª QUESTÃO              ")
   escreval("======================================")
   escreval("")
   escreval("RESPOSTA:")
   escreval("")
   escreval("Valor a pagar: R$", totalAPagar:2:2)
   escreval("Desconto: R$", desconto:2:2)

Fimalgoritmo
