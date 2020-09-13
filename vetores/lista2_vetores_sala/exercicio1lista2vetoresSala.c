#include <stdio.h>
#include "vetores.h"

int main(void)
{
    int vetorA[15], i, tamanhoVetorB, tamanhoVetorC, j, k;
    char conf;

    do
    {
        tamanhoVetorB=0;
        tamanhoVetorC=0;

        printf("=== VETOR COMPLETO ===\n");
        gerarVetorInteiros(vetorA, 15, 25);
        mostrarVetorInteiros(vetorA, 15);

        for(i=0; i<15; i++){
            if(vetorA[i]%2==0){
                tamanhoVetorB++;
            }
            else{
                tamanhoVetorC++;
            }
        }
        int vetorB[tamanhoVetorB];
        int vetorC[tamanhoVetorC];

        j=0;
        k=0;
        for(i=0; i<15; i++){
            if(vetorA[i]%2==0){
                vetorB[j]=vetorA[i];
                j++;
            }
            else{
                vetorC[k]=vetorA[i];
                k++;
            }
        }

        printf("\n=== VETOR DE PARES ===\n");
        mostrarVetorInteiros(vetorB, tamanhoVetorB);
        printf("\n\n=== VETOR DE IMPARES ===\n");
        mostrarVetorInteiros(vetorC, tamanhoVetorC);

        printf("\nDeseja executar o programa novamente(S ou N): \n");
        scanf(" %c", &conf);
    }
    while(conf=='S' || conf=='s');


    return 0;
}
