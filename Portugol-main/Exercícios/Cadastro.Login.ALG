Algoritmo "semnome"

Var

   login, senha, confirmacaoSenha,qualquerTecla, tentativaLogin, tentativaSenha:caracter

Inicio

   //Solicitando login e senha a serem cadastrados.

   repita

      escreval("CADASTRO")
      escreval("")

      escreva("Escolha um login: ")
      leia(login)
      escreval("")

      escreva("Escolha uma senha: ")
      leia(senha)
      escreval("")

      escreva("Confirme sua senha: ")
      leia(confirmacaoSenha)
      escreval("")

      // Verificando se a senha e a confirmação de senha coincidem.

      se confirmacaoSenha = senha então
         escreval("Cadastro realizado com sucesso!")
         escreval("")
         escreva("Digite qualquer tecla para realizar o login.")
         leia(qualquerTecla)
      senao
         escreval("As senhas digitadas não coincidem!")
         escreval("")
         escreva("Digite qualquer tecla para tentar novamente.")
         leia(qualquerTecla)
         escreval("")
      fimse

      se qualquerTecla = qualquerTecla entao
         limpatela
      fimse

   ate confirmacaoSenha = senha

   repita

      //Solicitando login e senha cadastrados.

      escreval("LOGIN")
      escreval("")

      escreva("Digite seu login: ")
      leia(tentativaLogin)
      escreval("")

      escreva("Digite sua senha: ")
      leia(tentativaSenha)
      escreval("")

      // Verificando se longin e senha estão corretos.

      se (tentativaLogin = login) e (tentativaSenha = senha) entao
         escreval("Bem-vindo!")
      senao
         escreval("Login ou senha inválidos.")
         escreval("")
         escreval("Digite qualquer tecla para tentar novamente.")
         leia(qualquerTecla)
         se qualquerTecla = qualquerTecla entao
            limpatela
         fimse
      fimse

   ate (tentativaLogin = login) e (tentativaSenha = senha)



Fimalgoritmo