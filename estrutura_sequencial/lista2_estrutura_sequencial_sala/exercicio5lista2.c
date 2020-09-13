/*
5) Escreva um programa para ler o número de votos brancos, nulos (incluem eleitores
ausentes) e válidos de uma eleição. Calcular e mostrar o percentual que cada um
(brancos, nulos e válidos) representa em relação ao total de eleitores. Lembrar que os
valores dos percentuais podem não ser inteiros.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int vb, vn, vv, soma;
    float pv;


    printf("\nInforme o numero de votos validos: ");
    scanf("%d", &vv);
    printf("\nInforme o numero de votos em branco: ");
    scanf("%d", &vb);
    printf("\nInforme o numero de votos nulos: ");
    scanf("%d", &vn);

    soma=vb+vn+vv;
    pv=((float)vv*100)/soma;
    printf("\nNumero de votos validos: %.1f%%", pv);
    pv=((float)vb*100)/soma;
    printf("\nNumero de votos em branco: %.1f%%", pv);
    pv=((float)vn*100)/soma;
    printf("\nNumero de votos em nulos: %.1f%%", pv);


}
