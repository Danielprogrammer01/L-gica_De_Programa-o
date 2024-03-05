Algoritmo "semnome"

Var

   a,b,c,soma,produto: real

Inicio

   escreval("======================================")
   escreval("             3ª QUESTÃO               ")
   escreval("======================================")
   escreval("")

   // Solicidando dados ao usuário.

   escreva("Digite o valor (a): ")
   leia(a)
   escreval("")

   escreva("Digite o valor (b): ")
   leia(b)
   escreval("")
   limpatela


   // Exibindo o resultado para o usuário.

   escreval("======================================")
   escreval("             3ª QUESTÃO               ")
   escreval("======================================")
   escreval("")
   escreval("RESPOSTA:")
   escreval("")

   // Calculando a soma e o produto.

   soma <- a + b
   produto <- a * b

   // Calculando o resultado.

   se a = b entao
      escreval("(a) e (b) são iguais.")
      escreval("")
      c <- soma
      escreval("Resultado da soma: ", c)
   senao
      escreval("(a) e (b) são diferentes.")
      escreval("")
      c <- produto
      escreval("Resultado da multiplicação: ", c)
   fimse

Fimalgoritmo
