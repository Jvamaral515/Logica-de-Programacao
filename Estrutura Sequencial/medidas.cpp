//inclusão de bibliotecas
#include <stdio.h>

//função principal
int main()
{
	//declaração das variáveis
	float a, b, c, areaQuadrado, areaTriangulo, areaTrapezio;
	//entrada de dados
	printf("\n Digite o valor de a: ");
	scanf("%f",&a);
	printf("\n Digite o valor de b: ");
	scanf("%f",&b);
	printf("\n Digite o valor de c: ");
	scanf("%f",&c);
	//processamento
	areaQuadrado = a * a;
	areaTriangulo = (a * b)/2;
	areaTrapezio = ((a + b)*c)/2;
	//saída de dados
	printf("\n\n Area do quadrado: %.2f \n Area do triangulo: %.2f \n Area do trapezio: %.2f \n",areaQuadrado, areaTriangulo, areaTrapezio);
	return 0;
}