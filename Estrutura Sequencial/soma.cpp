//inclusão de bibliotecas
#include <stdio.h>

//função principal
int main()
{
	//declaração das variáveis
	int x, y, soma;
	//entrada de dados
	printf("\n Digite o valor de x: ");
	scanf("%d",&x);
	printf("\n Digite o valor de y: ");
	scanf("%d",&y);
	//processamento
	soma = x + y;
	//saída de dados
	printf("\n\n O valor da soma entre x e y: %d \n",soma);
	return 0;
}