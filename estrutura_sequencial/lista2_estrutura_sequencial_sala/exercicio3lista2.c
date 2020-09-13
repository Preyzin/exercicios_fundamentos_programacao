/*
3) Escreva um programa que calcule o valor da conversão para dólares de um valor lido
em reais.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float reais, dolar;

    printf("\nInforme o valor atual do dolar em reais: R$ ");
    scanf("%f", &dolar);
    printf("\nInforme um valor em reais: R$");
    scanf("%f", &reais);

    printf("\nR$ %.2f equivalem a U$ %.2f", reais, reais/dolar);






}
