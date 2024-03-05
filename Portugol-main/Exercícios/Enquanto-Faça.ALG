Algoritmo "semnome"

Var

   nota: real
   resposta: caracter
   n: inteiro
   soma: real
   media:real

Inicio

   //Solicitando as notas para o usuário.


    
   enquanto (resposta <> "não") faca

      n <- n + 1
      soma <- soma + nota
      
      escreva("Digite a", n,"ª nota: ")
      leia(nota)
      escreval("")

      // Valindando as notas recebidas

      enquanto (nota < 0) ou (nota > 10) faca

         escreval("OBS.: Nota inválida, digite novamente!")
         escreval("")

         escreva("Digite a", n ,"ª nota: ")
         leia(nota)
         escreval("")

      fimenquanto

      escreva("Deseja inserir mais uma nota?")
      leia(resposta)
      escreval("")

   fimenquanto

   // Calculando a média.
   
   media <- soma / n

   escreval("Sua MÉDIA é de ",media:2:1," PONTOS!")


Fimalgoritmo