/*
4) Escreva um programa que, dados a quantidade de litros de combustível utilizada, os
quilômetros percorridos por um automóvel e o valor do litro de combustível, calcule
quantos quilômetros o veículo percorreu por litro de combustível e o valor gasto em reais
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
