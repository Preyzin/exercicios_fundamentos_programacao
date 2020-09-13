/*
3) Cada degrau de uma escada tem uma altura X. Faça um programa para ler essa altura
e a altura que o usuário deseja alcançar subindo a escada. Calcule e mostre quantos
degraus o usuário deverá subir para atingir o seu objetivo.
Obs.: A função floor() da biblioteca math.h arredonda o número para baixo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float degrau, alt;

    printf("\nInforme a altura da escada que deseja subir: ");
    scanf("%f", &alt);
    printf("\nInforme a altura do degrau: ");
    scanf("%f", &degrau);

    printf("\nVoce devera subir: %.0f", floor(alt/degrau));

    return 0;
}
