#include <stdio.h>
int main()
{
	int numero;
  printf("Usando While\n");
  numero = 1;  
  while(numero <= 100)
  {
    printf("%d ",numero);
    numero++;
  }
  printf("\n");
  printf("Usando for\n"); 
	for(numero = 2;numero <= 100;numero = numero + 2)
	{
    printf("%d ",numero);
	}
  printf("\n");
  printf("Usando do while\n");
  numero = 1; 
	do
	{
    printf("%d ",numero);
    numero = numero + 2;
	}
  while(numero <= 100);
}