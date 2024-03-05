Algoritmo "semnome"

Var

   nota1: real
   nota2: real
   media: real
   comentario: caracter


Inicio

   escreval("======================================")
   escreval("             6ª QUESTÃO               ")
   escreval("======================================")
   escreval("")

   // Solicidando dados ao usuario.

   escreval("MÉDIA ARITMÉTICA")
   escreval("")
   escreva("Digite a primeira nota: ")
   leia (nota1)
   escreval("")

   escreva("Digite a a nota: ")
   leia (nota2)
   limpatela

   // Calculando a média.

   media <- (nota1 + nota2) / 2

   // Definindo a mensagem.

   se media >= 6 entao
      comentario <- "Parabéns! Você está APROVADO"
   senao
      se media < 4 entao
         comentario <- "Você está REPROVADO!"
      senao
         comentario <- "Você está EM RECUPERAÇÃO!"
      fimse
   fimse

   // Exibindo o resultado para o usuário.

   escreval("======================================")
   escreval("             6ª QUESTÃO               ")
   escreval("======================================")
   escreval("")
   escreval("RESPOSTA:")
   escreval("")
   escreval("MÉDIA ARITMÉTICA")
   escreval("")
   escreval("Sua média: ", media:2:2, " pontos")
   escreval("")
   escreval(comentario)


Fimalgoritmo
