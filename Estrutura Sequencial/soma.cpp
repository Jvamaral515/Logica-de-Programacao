//inclus�o de bibliotecas
#include <stdio.h>

//fun��o principal
int main()
{
	//declara��o das vari�veis
	int x, y, soma;
	//entrada de dados
	printf("\n Digite o valor de x: ");
	scanf("%d",&x);
	printf("\n Digite o valor de y: ");
	scanf("%d",&y);
	//processamento
	soma = x + y;
	//sa�da de dados
	printf("\n\n O valor da soma entre x e y: %d \n",soma);
	return 0;
}