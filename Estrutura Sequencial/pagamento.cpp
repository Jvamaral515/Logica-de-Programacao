//inclusão de bibliotecas
#include <stdio.h>
#include <conio.h>

//função principal
int main()
{
	//declaração das variáveis
	char nomeFunc[35];
	float salarioHora, salarioFinal;
	int horasTrab;
	//entrada de dados
	printf("\n Digite o nome do funcionario: ");
	fflush(stdin);
	gets(nomeFunc);
	printf("\n Informe o salario ganho por hora em reais: ");
	scanf("%f",&salarioHora);
	printf("\n Informe o numero de horas trabalhadas: ");
	scanf("%d",&horasTrab);
	//processamento
	salarioFinal = salarioHora * horasTrab;
	//saída de dados
	printf("\n\n O pagamento para %s deve ser R$%.2f \n",nomeFunc, salarioFinal);
	return 0;
}