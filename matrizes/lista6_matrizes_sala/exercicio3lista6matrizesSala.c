#include <stdio.h>
#include "matrizes.h"

int main(void)
{
    int matriz[10][10], i, j;

    gerarMatrizInteiro(10, 10, matriz, 1);
    printf("==== MATRIZ ORIGINAL ====\n");
    mostrarMatrizInteiro(10, 10, matriz);

    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            if(j==i)
            {
                matriz[i][j]=0;
            }
        }
    }

    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++){
            if(i+j == 10-1){
                matriz[i][j]=0;
            }
        }
    }
    printf("\n==== MATRIZ ATUAL ====\n");
    mostrarMatrizInteiro(10, 10, matriz);

    return 0;
}
