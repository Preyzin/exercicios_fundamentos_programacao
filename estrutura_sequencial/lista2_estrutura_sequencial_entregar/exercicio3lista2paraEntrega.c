/*
3) Cada degrau de uma escada tem uma altura X. Fa�a um programa para ler essa altura
e a altura que o usu�rio deseja alcan�ar subindo a escada. Calcule e mostre quantos
degraus o usu�rio dever� subir para atingir o seu objetivo.
Obs.: A fun��o floor() da biblioteca math.h arredonda o n�mero para baixo.
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
