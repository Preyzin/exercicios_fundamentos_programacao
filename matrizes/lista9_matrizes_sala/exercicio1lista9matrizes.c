#include <stdio.h>
#include "matrizes.h"

int main(void)
{
    int valor, i, j, result=0;
    int matriz[5][5];

    gerarMatrizInteiro(5, 5, matriz, 50);
    printf("==== MATRIZ ====\n");
    for(i = 0; i<5; i++){
        for(j = 0; j<5; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Informe um valor: \n");
    scanf("%d", &valor);

    for(i = 0; i<5; i++){
        for(j = 0; j<5; j++){
            if(matriz[i][j]==valor){
                result=1;
                break;
            }
        }

    }

    if(result==1){
        printf("%d existe na matriz\n", valor);
    }
    else{
        printf("%d nao existe na matriz\n", valor);
    }



    return 0;
}
