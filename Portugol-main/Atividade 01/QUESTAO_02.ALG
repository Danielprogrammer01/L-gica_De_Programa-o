Algoritmo "semnome"


Var

   nome: caracter
   sexo: caracter
   estadoCivil: caracter
   tempoCasamento: real

Inicio

   escreval("======================================")
   escreval("             2ª QUESTÃO               ")
   escreval("======================================")
   escreval("")

   // Solicidando dados ao usuário.

   escreva("Digite seu nome: ")
   leia(nome)
   escreval("")

   escreval("Digite seu sexo:")
   escreval("(M) - Masculino ou (F) - Feminino ")
   leia(sexo)
   escreval("")

   escreva("Digite seu estado civil: ")
   leia(estadoCivil)
   escreval("")

   // Solicitando o tempo de casamento, para o sexo feminino.

   se (sexo = "F") ou (sexo = "f") e (estadoCivil = "Casada") ou (estadoCivil = "CASADA") ou (estadoCivil = "casada") entao
      escreva("Digite o tempo de casada, em anos: ")
      leia(tempoCasamento)
   fimse
   escreval("")
   limpatela


   // Exibindo o resultado para o usuário.

   escreval("======================================")
   escreval("             2ª QUESTÃO               ")
   escreval("======================================")
   escreval("")
   escreval("RESPOSTA:")
   escreval("")
   escreval("Nome: ", nome)

   // Validando a exibição do sexo.

   se (sexo = "M") ou (sexo = "m") entao
      sexo <- "Masculino"
   senao
      se (sexo = "F") ou (sexo = "f") entao
         sexo <- "Feminino"
      fimse
   fimse

   escreval("Sexo: ", sexo)

   // Validando a exibição do estado civil.

      //Caso sexo feminino

   se (estadoCivil = "Casada") ou (estadoCivil = "CASADA") ou (estadoCivil = "casada") entao
      estadoCivil <- "Casada"
   senao
      se (estadoCivil = "Solteira") ou (estadoCivil = "SOLTEIRA") ou (estadoCivil = "solteira") entao
         estadoCivil <- "Solteira"
      fimse
   fimse

        //Caso sexo masculino

   se (estadoCivil = "Casado") ou (estadoCivil = "CASADO") ou (estadoCivil = "casado") entao
      estadoCivil <- "Casado"
   senao
      se (estadoCivil = "Solteiro") ou (estadoCivil = "SOLTEIRO") ou (estadoCivil = "solteiro") entao
         estadoCivil <- "Solteiro"
      fimse
   fimse

   escreval("Estado civil: ", estadoCivil)

   // Validando a exibição do tempo de casamento.

   se (sexo = "Feminino") e (estadoCivil = "Casada") entao
      escreval("Tempo de casada: ", tempoCasamento, " anos")
      leia(tempoCasamento)
   fimse

Fimalgoritmo
