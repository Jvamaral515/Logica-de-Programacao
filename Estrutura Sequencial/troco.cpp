//inclus�o de bibliotecas
#include <stdio.h>

//fun��o principal
int main()
{
	//declara��o das vari�veis
	float precoProduto, valorPago, valorTroco, valorTotal;
	int qtdProduto;
	//entrada de dados
	printf("\n Informe o preco do produto: ");
	scanf("%f",&precoProduto);
	printf("\n Informe quantos produtos foram comprados: ");
	scanf("%d",&qtdProduto);
	printf("\n Informe o valor recebido: ");
	scanf("%f",&valorPago);
	//processamento
	valorTotal = precoProduto * qtdProduto;
	valorTroco = valorPago - valorTotal;
	//sa�da de dados
	printf("\n\n Seu troco e de: R$%.2f \n",valorTroco);
	return 0;
}