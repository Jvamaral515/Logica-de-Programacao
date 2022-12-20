//inclusão de bibliotecas
#include <stdio.h>

//função principal
int main()
{
	//declaração das variáveis
	int duracao, timeSeg, timeMin, timeHour, resto;
	//entrada de dados
	printf("\n Digite um tempo em segundos: ");
	scanf("%d",&duracao);
	//processamento
	timeHour = duracao / 3600;
	resto = duracao % 3600;
	timeMin = resto / 60;
	timeSeg = resto % 60;
	//saída de dados
	printf("\n\n %d:%d:%d \n",timeHour, timeMin, timeSeg);
	return 0;
}