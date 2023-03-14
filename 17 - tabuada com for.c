#include <stdio.h>
int main()
{
	int numero,contador,resultado;
	printf("Digite um número para exibir a tabuada: ");
	scanf("%d", &numero);
	for(contador = 0;contador <= 10;contador = contador + 1)
	{
		resultado = numero * contador;
		printf("%d x %d = %d\n",numero,contador,resultado);
	}
}