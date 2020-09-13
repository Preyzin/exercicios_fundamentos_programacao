/*
1) Fa�a um programa que receba o custo de um espet�culo teatral e o pre�o do convite
desse espet�culo. Esse programa deve calcular e mostrar:
a) A quantidade de convites que devem ser vendidos para cobrir o custo do espet�culo.
b) A quantidade de convites que devem ser vendidos para cobrir o custo do espet�culo e
ainda obter um lucro de 25%.
Obs.: A fun��o ceil() da biblioteca math.h arredonda o n�mero para cima.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float custoEspetaculo, precoConvite, lucro, nconvites;

    printf("\nInforme o custo total do espetaculo teatral: ");
    scanf("%f", &custoEspetaculo);
    printf("\nInforme o custo do convite para o espetaculo: ");
    scanf("%f", &precoConvite);

    nconvites=custoEspetaculo/precoConvite;

    printf("\nPara cobrir o custo do espetaculo eh necessario vender %.0f", ceil(nconvites));

    lucro=(nconvites*0.25)+nconvites;

    printf("\nPara cobrir o lucro do espetaculo e obter lucro de 25%% eh necessario vender %.0f convites", ceil(lucro));

    return 0;
}
