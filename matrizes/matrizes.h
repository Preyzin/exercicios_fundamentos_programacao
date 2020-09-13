#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna], int limite)
{
    int i, j;

    srand(time(NULL));

    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            matriz[i][j]=rand()%limite+1;
        }
    }
}

void mostrarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna])
{
    int i, j;

    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int calculaDiagonalPrincipal(int linha, int coluna, int matriz[linha][coluna])
{
    int dp=0, i, j;

    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            if(j==i)
            {
                dp+=matriz[i][j];
            }
        }
    }

    return dp;

}

int calculaDiagonalSecundaria(int linha, int coluna, int matriz[linha][coluna])
{
    int ds=0, i, j;

    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++){
            if(i+j == linha-1){
                ds+=matriz[i][j];
            }
        }
    }

    return ds;
}

int somaElementosMatriz(int linha, int coluna, int matriz[linha][coluna]){
    int soma=0, i, j;

    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            soma+=matriz[i][j];
        }
    }

    return soma;
}
