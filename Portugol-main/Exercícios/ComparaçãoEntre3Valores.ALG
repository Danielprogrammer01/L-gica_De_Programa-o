Algoritmo "semnome"

Var

   n1,n2,n3,numeroMaior,numeroMenor: real

Inicio

   //Solicitando os valores.

   escreva("Digite um número: ")
   leia(n1)
   escreval("")

   escreva("Digite outro número: ")
   leia(n2)
   escreval("")

   escreva("Digite outro número: ")
   leia(n3)
   escreval("")

   limpatela

   //Exibindo os valores.

   escreval("NÚMEROS INFORMADOS")
   escreval("")
   escreval("Primeiro número: ", n1)
   escreval("Segundo número: ", n2)
   escreval("Terceiro número: ", n3)
   escreval("")

   //Verificando qual o número é o maior e o menor.

   se (n1 > n2) e (n1 > n3) entao
      numeroMaior <- n1
   senao
      se(n2 > n3) entao
         numeroMaior <- n2
      senao
         numeroMaior <- n3
      fimse
   fimse

   se (n1 < n2) e (n1 < n3) entao
      numeroMenor <- n1
   senao
      se(n2 < n3) entao
         numeroMenor <- n2
      senao
         numeroMenor <- n3
      fimse
   fimse

   escreval("Maior número: ", numeroMaior)
   escreval("Menor número: ", numeroMenor)


Fimalgoritmo