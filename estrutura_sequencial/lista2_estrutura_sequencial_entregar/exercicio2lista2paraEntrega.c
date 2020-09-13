/*
2) Elabore um programa que leia via teclado uma quantidade de segundos (tipo int) e
transforme este tempo em dias, horas e minutos (as três últimas em tipo float).
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s;
    float d, h, min;

    printf("\nInsira um valor em segundos: ");
    scanf("%d", &s);

    min=s/60;
    h=min/60;
    d=h/24;

    printf("\nO tempo em minutos eh: %f", min);
    printf("\nO tempo em horas eh: %f", h);
    printf("\nO tempo em dias eh: %f", d);

    return 0;
}
