#include <stdio.h>
int main()
{
 int numeros[10], pares = 0, impares = 0, cont;
 for(cont = 0; cont <= 9; cont = cont +1)
 {
 printf("Digite um o %dº valor: ",cont+1);
 scanf("%d",&numeros[cont]);
 if(numeros[cont] % 2 == 0)
 {
 pares = pares + 1;
 }
 else
 {
 impares = impares + 1;
 }
 }
 printf("\n");
 printf("Numeros [");
 for(cont = 0; cont <= 9; cont = cont +1)
 {
 printf("%d ",numeros[cont]);
 }
 printf("\b]");
 printf("\n");
 printf("Total de Pares: %d\n", pares);
 printf("Total de Impares: %d\n", impares);
}