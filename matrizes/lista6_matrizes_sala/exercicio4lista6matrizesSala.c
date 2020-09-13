#include <stdio.h>
#include "matrizes.h"
#include "vetores.h"
#define linha 50
#define coluna 10


int main(void)
{
    int clebinho[linha][coluna], peixe, biscoito, nailton[coluna], kkk=0, i=0;

    gerarMatrizInteiro(linha, coluna, clebinho, 5);
    printf("==== RESPOSTA DOS ALUNOS ====\n");
    for(peixe=0; peixe<linha; peixe++){
        printf("\nAluno\t%d ==>\t", peixe+1);
        for(biscoito=0; biscoito<coluna; biscoito++){
            printf("%d\t", clebinho[peixe][biscoito]);
        }
    }

    gerarVetorInteiros(nailton, coluna, 5);
    printf("\n==== GABARITO ====\n");
    mostrarVetorInteiros(nailton, linha);

    printf("\n==== PONTUACAO OBTIDA ====\n");

    for(peixe=0; peixe<linha; peixe++){
        for(biscoito=0; biscoito<coluna; biscoito++){
            if(clebinho[peixe][biscoito]==nailton[i]){
                kkk++;

            }
            i++;
        }
        i=0;
        printf("\nAluno\t%d ==> %d pontos", peixe+1, kkk);
        kkk=0;
    }


    return 0;
}
