#include <stdio.h>
int main()
{
	int numero,continuar,soma;
	continuar = 1;
	soma = 0;
	while(continuar)
	{
		printf("Digite um número para a soma: ");
		scanf("%d", &numero);
		printf("Deseja continuar (1 para continuar | 0 para parar): ");
		scanf("%d", &continuar);
		if(continuar != 0)
			soma = soma + numero;
	}	
	printf("A soma dos numero digitados e: %d",soma);	
}