//inclusão de bibliotecas
#include <stdio.h>

//função principal
int main()
{
	//declaração das variáveis
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
	//saída de dados
	printf("\n\n Seu troco e de: R$%.2f \n",valorTroco);
	return 0;
}