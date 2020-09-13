#include <stdio.h>
#include "matrizes.h"
#define linha 3
#define coluna 3


int main(void)
{
    int matriz[linha][coluna], sumDiagP=0, sumDiagS=0;

    gerarMatrizInteiro(linha, coluna, matriz, 10);
    mostrarMatrizInteiro(linha, coluna, matriz);

    printf("\nDP: %d", calculaDiagonalPrincipal(linha, coluna, matriz));
    printf("\nDS: %d", calculaDiagonalSecundaria(linha, coluna, matriz));
    printf("\nSOMA: %d", somaElementosMatriz(linha, coluna, matriz));


    return 0;
}
