/*
4) Faça um programa que receba o peso e a altura de uma pessoa e calcule o índice de
massa corpórea. Esse índice mede a relação entre peso e altura (peso em quilogramas
dividido pelo quadrado da altura em metros). Use a função pow() da biblioteca math.h
para calcular a potência.
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
