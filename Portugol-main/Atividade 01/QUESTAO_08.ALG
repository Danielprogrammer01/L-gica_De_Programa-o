Algoritmo "semnome"

Var

   opcao: inteiro
   preco: inteiro
   cor: caracter

Inicio

   repita

      escreval("======================================")
      escreval("             8ª QUESTÃO               ")
      escreval("======================================")
      escreval("")

      // Solicidando dados ao usuario.

      repita

         escreval ("Escolha a cor do CD: ")
         escreval("")
         escreval("(1) - Azul")
         escreval("(2) - Amarelo")
         escreval("(3) - Vermelho")
         escreval("(4) - Verde")
         escreval("")
         escreval("Digite o número da cor.")
         escreval("")
         leia(opcao)
         limpatela

      ate opcao <= 4

      //  Definindo os preços de acordo a cor dos CD´s.

      se opcao = 1 entao
         cor <- "AZUL"
         preco <- 20
      senao
         se opcao = 2 entao
            cor <- "AMARELO"
            preco <- 30
         senao
            se opcao = 3 entao
               cor <- "VERMELHO"
               preco <- 40
            senao
               se opcao = 4  entao
                  cor <- "VERDE"
                  preco <- 10
               fimse
            fimse
         fimse
      fimse


      // Exibindo o resultado para o usuário.

      escreval("======================================")
      escreval("             8ª QUESTÃO               ")
      escreval("======================================")
      escreval("")
      escreval("RESPOSTA:")
      escreval("")
      escreval("O CD ", cor," custa R$",preco:2:2)

Fimalgoritmo
