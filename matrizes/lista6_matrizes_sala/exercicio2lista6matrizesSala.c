#include <stdio.h>
#include "matrizes.h"
#include "vetores.h"

int main(void)
{
    int matriz[5][5], somaLinha[5]={0, 0, 0, 0, 0}, somaColuna[5]={0, 0, 0, 0, 0}, i, j;

    gerarMatrizInteiro(5, 5, matriz, 5);
    printf("==== MATRIZ ====\n");
    mostrarMatrizInteiro(5, 5, matriz);

    printf("==== SOMA DAS LINHAS ====\n");

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            somaLinha[i]+=matriz[i][j];
            somaColuna[j]+=matriz[i][j];
        }

    }

    mostrarVetorInteiros(somaLinha, 5);
    printf("\n==== SOMA DAS COLUNAS ====\n");
    mostrarVetorInteiros(somaColuna, 5);
    return 0;
}
