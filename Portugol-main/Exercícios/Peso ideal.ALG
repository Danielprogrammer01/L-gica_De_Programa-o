Algoritmo "semnome"

Var

   sexo: caracter
   peso:real
   altura: real
   pesoIdeal:real

Inicio


   //Solicitando dados ao usuário.

   escreva("Digite seu peso: ")
   leia(peso)
   escreval("")
   escreva("Digite sua altura, em metros: ")
   leia(altura)
   escreval("")
   escreval("(M) - Masculino")
   escreval("(F) - Feminino")
   escreval("")
   escreva("Digite o seu sexo: ")
   leia(sexo)
   limpatela

   se sexo = "m" entao
      sexo <- "M"
   senao
      se sexo = "f" entao
         sexo <- "F"
      fimse
   fimse

   //Calculando e exibindo o resultado.

   escolha sexo

   caso "M"

      pesoIdeal <- (peso * altura) * 0.50
      escreval("Seu peso ideal é: ", pesoIdeal :2:1, "Kg")
   caso "F"

      pesoIdeal <- (peso * altura) * 0.40
      escreval("Seu peso ideal é: ", pesoIdeal :2:1, "Kg")

   outrocaso

      escreval("Opção inválida!")

   fimescolha




Fimalgoritmo