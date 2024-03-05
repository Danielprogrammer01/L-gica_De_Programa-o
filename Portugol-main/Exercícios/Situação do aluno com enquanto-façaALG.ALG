Algoritmo "semnome"

Var

   media: real
   situacao: caracter

Inicio

      escreva("Digite sua média: ")
      leia(media)
      limpatela

   enquanto (media < 0) ou (media > 10) faca

      escreval("Obs.: A média deve estar entre 0 e 10.")
      escreval("")
      escreva("Digite sua média novamente: ")
      leia(media)
      limpatela

   fimenquanto

   se media >= 7 entao
      situacao <- "APROVADO!"
   senao
      se (media >= 5) entao
         situacao <- "EM RECUPERAÇÃO!"
      senao
         se media < 5 entao
            situacao <- "REPROVADO!"
         fimse
      fimse
   fimse

   escreval("Sua média é de ", media :2:1, " pontos")
   escreval("")
   escreval("Você está ",situacao)

Fimalgoritmo