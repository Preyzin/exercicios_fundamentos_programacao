/*
4) Escreva um programa que, dados a quantidade de litros de combust�vel utilizada, os
quil�metros percorridos por um autom�vel e o valor do litro de combust�vel, calcule
quantos quil�metros o ve�culo percorreu por litro de combust�vel e o valor gasto em reais
por km.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lcomb, km, vlcomb, kmpl, reaispkm;

    printf("\nInforme os quilometros percorridos: ");
    scanf("%f", &km);
    printf("\nInforme o combustivel consumido (em litros): ");
    scanf("%f", &lcomb);
    printf("\nInforme o valor do litro de combustivel: ");
    scanf("%f", &vlcomb);

    kmpl=km/lcomb;

    printf("\nO automovel fez %.2f km por litro de combustivel.", kmpl);

    reaispkm=vlcomb/kmpl;

    printf("\nO gasto em reais por km foi de R$ %.2f.", reaispkm);
}
