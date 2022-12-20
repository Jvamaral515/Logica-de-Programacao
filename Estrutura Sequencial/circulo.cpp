//inclusão de bibliotecas
#include <stdio.h>
#include <math.h>

//função principal
int main()
{
	//declaração das variáveis
	float raio, area;
	const float PI = 3.14159;
	//entrada de dados
	printf("\n Digite o valor do raio do circulo: ");
	scanf("%f",&raio);
	//processamento
	area = PI * pow(raio,2);
	//saída de dados
	printf("\n\n A area do circulo é de %.2f \n",area);
	return 0;
}