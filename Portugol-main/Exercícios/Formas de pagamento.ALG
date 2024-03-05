Algoritmo "semnome"

Var

   valor: real
   formaPagamento: caracter
   desconto: real
   totalAVista: real
   totalAPrazo: real
   valorParcela: real
   quantidadeParcelas: inteiro



Inicio


   //Solicitando dados ao usuário.

   escreva("Informe o valor do produto: R$")
   leia(valor)
   escreval("")
   escreval("FORMAS DE PAGAMENTO")
   escreval("")
   escreval("(V) - À vista ( 10% Desconto) ")
   escreval("(P) - À prazo (Até 6x s/ juros) ")
   escreval("")
   escreva("Escolha a forma de pagamento: ")
   leia(formaPagamento)
   limpatela

   //Calculando o resultado.

   se formaPagamento = "v" entao
      formaPagamento <- "V"
   senao
      se formaPagamento = "p" entao
         formaPagamento <- "P"
      fimse
   fimse

   escolha formaPagamento

   caso "V"

      formaPagamento <- "À Vista"
      desconto <- valor * (10/100)
      totalAVista <- valor - desconto
      escreval("Valor do produto: R$", valor :2:2)
      escreval("Forma de pagamento:", formaPagamento)
      escreval("Valor do desconto: R$", desconto :2:2)
      escreval("Total a pagar: R$", totalAVista :2:2)

   caso "P"

      escreva("Deseja parcelar em quantas vezes?")
      leia(quantidadeParcelas)
      limpatela

      se (quantidadeParcelas > 6) entao
         escreval("Quantidade de parcelas acima do permitido!")
      senao
         formaPagamento <- "À Prazo"
         totalAPrazo <- valor
         valorParcela <- valor / quantidadeParcelas

         escreval("Valor do produto: R$", valor :2:2)
         escreval("Forma de pagamento: ", formaPagamento)
         escreval("Quantidade de parcelas: ",quantidadeParcelas)
         escreval("Valor por parcela: R$", valorParcela :2:2)
         escreval("Total à prazo: R$", totalAPrazo :2:2)
      fimse

   outrocaso

      escreval("Opção inválida!")

   fimescolha





Fimalgoritmo