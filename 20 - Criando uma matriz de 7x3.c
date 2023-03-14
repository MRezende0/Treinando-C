#include <stdio.h>
int main()
{
	int i,j,A[7][3];
  for(i=0;i<7;i++)
  {
      for(j=0;j<3;j++)
      {
        printf("Digite o valor da linha %d coluna %d da vetor A: ",i,j);
        scanf("%d",&A[i][j]);
      }
  }
  printf("Imprimindo a matriz A\n");
  for(i=0;i<7;i++)
      for(j=0;j<3;j++)
        printf("%d ",A[i][j]);
}