/*
6) Fa�a um programa que leia o pre�o de uma mercadoria com diferen�a de um m�s (ler
o valor da mercadoria no m�s passado e no m�s atual) e calcule a taxa de infla��o
mensal dessa mercadoria. A infla��o � o percentual da diferen�a de pre�os (atual menos
o anterior) sobre o pre�o anterior.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valormatual, valormanterior, inflacao;

    printf("\nInforme o preco da mercadoria no mes passado: ");
    scanf("%f", &valormanterior);
    printf("\nInforme o preco da mercadoria no mes atual: ");
    scanf("%f", &valormatual);

    inflacao = ((valormatual-valormanterior)/valormanterior)*100;

    printf("\nA taxa de inflacao da mercadoria eh: %.2f%%", inflacao);


}
