#include<stdio.h>

int main()
{
	float salario, reajuste, novosalario;
	printf("Digite o valor do seu salário: ");
	scanf("%f",&salario);
	printf("Digite o percentual de reajuste desejado: ");
	scanf("%f",&reajuste);
	
	novosalario = salario * ((reajuste/100)+1)
	
	printf("O novo salario e igual a: %.2f",novosalario);
}

