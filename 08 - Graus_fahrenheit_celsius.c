#include<stdio.h>

int main()
{
    float grausfah, grauscelsius;
    printf ("digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &grausfah);

    grauscelsius = 5*((grausfah - 32)/9);
    
    printf("o valor em Graus Celsius é de aproximadamente %.2f \n",grauscelsius);
}