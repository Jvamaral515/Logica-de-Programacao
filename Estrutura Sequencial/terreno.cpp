//inclusão de bibliotecas
#include <stdio.h>

//função principal
int main()
{
	//declaração das variáveis
	float largura, comprimento, precoMetro, areaTotal, valorFinal;
	//entrada de dados
	printf("\n Digite a largura do terreno:");
	scanf("%f",&largura);
	printf("\n Digite o comprimento do terreno:");
	scanf("%f",&comprimento);
	printf("\n Digite o preco do metro quadrado do terreno:");
	scanf("%f",&precoMetro);
	//processamento
	areaTotal = largura * comprimento;
	valorFinal = areaTotal * precoMetro;
	//saída de dados
	printf("\n \n O valor do terreno e de R$%.2f e sua area e de %.2f \n",valorFinal, areaTotal);
	return 0;
}