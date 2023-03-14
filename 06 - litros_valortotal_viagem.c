#include<stdio.h>

int main()
{
    float valorlitro, desempenho, distancia, litros, valortotal;
    printf ("digite o valor do litro de combustível: ");
    scanf("%f", &valorlitro);
    printf ("digite o desempenho do seu carro por km/litro: ");
    scanf("%f", &desempenho);
    printf ("digite a distância de uma cidade a outra em km: ");
    scanf("%f", &distancia);

    litros =  distancia / desempenho;
    valortotal = litros * valorlitro;

    printf ("O valor que voce irá gastar será de %.2f e o total  em litros será de %.2f \n",valortotal,litros);
}