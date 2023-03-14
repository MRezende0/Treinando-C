#include <stdio.h>
int main()
{
	int i,A[10],B[10],valor;
  for(i=0;i<10;i++)
  {
    printf("Digite o valor da posição %d do vetor A: ",i);
    scanf("%d",&A[i]);
  }
  printf("Digite um valor para calcular o conteúdo do vetor B: ");
  scanf("%d",&valor);
  for(i=0;i<10;i++)
    B[i]=A[i]+valor;
  printf("Imprimindo o vetor A\n");
  for(i=0;i<10;i++)
    printf("%d ",A[i]);
  printf("\n");
  printf("Imprimindo o vetor B\n");
  for(i=0;i<10;i++)
    printf("%d ",B[i]);
}