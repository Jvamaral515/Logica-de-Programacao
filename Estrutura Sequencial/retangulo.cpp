//inclus�o de bibliotecas
#include <stdio.h>
#include <math.h>

//fun��o principal
int main()
{
	//declara��o das vari�veis
	float altura, base, area, perimetro, diagonal;
	//entrada de dados
	printf("\n Digite a altura do retangulo:");
	scanf("%f",&altura);
	printf("\n Digite o valor da base do retangulo:");
	scanf("%f",&base);
	//processamento
	area = altura * base;
	perimetro = (altura + base) * 2;
	diagonal  = sqrt(pow(base,2) + pow(altura,2));
	//sa�da de dados
	printf(" \n\n Area do retangulo: %.2f \n Perimetro: %.2f \n Diagonal: %.2f",area, perimetro, diagonal);
	return 0;
}