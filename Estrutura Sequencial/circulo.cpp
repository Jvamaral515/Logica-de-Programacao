//inclus�o de bibliotecas
#include <stdio.h>
#include <math.h>

//fun��o principal
int main()
{
	//declara��o das vari�veis
	float raio, area;
	const float PI = 3.14159;
	//entrada de dados
	printf("\n Digite o valor do raio do circulo: ");
	scanf("%f",&raio);
	//processamento
	area = PI * pow(raio,2);
	//sa�da de dados
	printf("\n\n A area do circulo � de %.2f \n",area);
	return 0;
}