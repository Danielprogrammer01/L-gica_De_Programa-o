Algoritmo "semnome"

Var

   rendaMensal: real
   valorPrestacao: real
   quantidadePrestacoes: real
   valorTotal: real
   situacao: caracter

Inicio

   escreval("======================================")
   escreval("             9ª QUESTÃO               ")
   escreval("======================================")
   escreval("")

   // Solicidando dados ao usuario.

   escreva("Quanto é sua renda mensal? R$")
   leia (rendaMensal)
   escreval("")

   escreva("Qual valor total do empréstimo a solicitar? R$")
   leia (valorTotal)
   escreval("")

   escreva("E deseja pagar em quantas prestações? ")
   leia (quantidadePrestacoes)
   escreval("")
   limpatela

   // Calculando o valor das prestações.

   valorPrestacao <- valorTotal / quantidadePrestacoes

   // Exibindo o resultado para o usuário.

   escreval("======================================")
   escreval("             9ª QUESTÃO               ")
   escreval("======================================")
   escreval("")
   escreval("RESPOSTA:")
   escreval("")

   // Verificando se o empréstimo será concedido ou não.

   se (valorPrestacao <= (rendaMensal * 30/100)) e (valorTotal <= 10 * rendaMensal) entao
      situacao <- "Sua solicitação foi APROVADA! O empréstimo poderá ser concedido."
      escreval(situacao)
      escreval("")
      escreval("Valor das prestações: R$", valorPrestacao:2:2)
   senao
      situacao <- "Sua solicitação foi NEGADA! O empréstimo não poderá ser concedido."
      escreval(situacao)
   fimse

Fimalgoritmo
