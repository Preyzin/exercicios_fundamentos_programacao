#include <stdio.h>
#include "vetores.h"

int main(void)
{
    int vetorA[20], vetorB[20], i, tamanhoB=0, cont0=0, j=0;

    gerarVetorInteiroComLimite(vetorA, 20, 0, 1);
    printf("==== VETOR A ====\n");
    mostrarVetorInteiros(vetorA, 20);

    for(i=0;i<20;i++){
        if(vetorA[i]==0){
            cont0++;
        }
        else{
            if(cont0>0){
                vetorB[j]=cont0;
                j++;
                cont0=0;
            }
        }
    }
    printf("\n\n\n");
    mostrarVetorInteiros(vetorB, j);

    return 0;
}
