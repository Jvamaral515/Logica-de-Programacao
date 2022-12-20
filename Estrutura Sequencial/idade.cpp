//inclusão de bibliotecas
#include <stdio.h>
#include <conio.h>

//função principal
int main()
{
	//declaração das variáveis
	char nome1[30],nome2[30];
	int idade1, idade2;
	float mediaIdade;
	//entrada de dados (pessoa 1)
	printf("\n Digite o nome da pessoa 1: ");
	fflush(stdin);
	gets(nome1);
	printf("\n Digite a idade da pessoa 1: ");
	scanf("%d",&idade1);
	//entrada de dados (pessoa 2)
	printf("\n Digite o nome da pessoa 2: ");
	fflush(stdin);
	gets(nome2);
	printf("\n Digite a idade da pessoa 2: ");
	scanf("%d",&idade2);
	//processamento
	mediaIdade = (idade1 + idade2)/2;
	//saída de dados
	printf("\n\n A idade media entre %s e %s e de %.2f",nome1, nome2, mediaIdade);
	return 0;
}