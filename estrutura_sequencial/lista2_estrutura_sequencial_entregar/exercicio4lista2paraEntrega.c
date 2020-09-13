/*
4) Fa�a um programa que receba o peso e a altura de uma pessoa e calcule o �ndice de
massa corp�rea. Esse �ndice mede a rela��o entre peso e altura (peso em quilogramas
dividido pelo quadrado da altura em metros). Use a fun��o pow() da biblioteca math.h
para calcular a pot�ncia.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float peso, altura, indice;

    printf("\nInforme o peso (em kg): ");
    scanf("%f", &peso);
    printf("\nInforme a altura (em metros): ");
    scanf("%f", &altura);

    indice=peso/pow(altura, 2);

    printf("\nO indice de massa corporea eh: %.2f", indice);

    return 0;
}
