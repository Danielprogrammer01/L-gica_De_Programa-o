Algoritmo "semnome"

Var

   prato: caracter
   codigo: inteiro
   preco: real

Inicio

   //Exibindo o menu do cardápio ao usuário.

   escreval("|========================================|")
   escreval("|                CARDÁPIO                |")
   escreval("|========================================|")
   escreval("|      CÓDIGO       |        PRATO       |")
   escreval("|----------------------------------------|")
   escreval("|                   |                    |")
   escreval("|        1          |       Picanha      |")
   escreval("|        2          |       Lasanha      |")
   escreval("|        3          |     Strogonoff     |")
   escreval("|        4          |   Bife Acebolado   |")
   escreval("|        5          |     Pão c/ ovo     |")
   escreval("|                   |                    |")
   escreval("|========================================|")
   escreval("")

   //Solicitando código ao usuário.

   escreva("Escolha o codigo do prato desejado: ")
   leia(codigo)
   escreval("")

   // Exibindo o resultado.

   escolha codigo

   caso 1

      prato <- "Picanha"
      preco <- 25
      escreval(prato," - R$",preco:2:2)

   caso 2

      prato <- "Lasanha"
      preco <- 20
      escreval(prato," - R$",preco:2:2)

   caso 3

      prato <- "Strogonoff"
      preco <- 18
      escreval(prato," - R$",preco:2:2)

   caso 4

      prato <- "Bife Acebolado"
      preco <- 15
      escreval(prato," - R$",preco:2:2)

   caso 5

      prato <- "Pão c/ ovo"
      preco <- 5
      escreval(prato," - R$",preco:2:2)

   outrocaso

      escreval("Opção inválida!")

   fimescolha


Fimalgoritmo