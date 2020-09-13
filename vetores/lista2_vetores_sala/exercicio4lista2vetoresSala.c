#include <stdio.h>
#include "vetores.h"

int main(void){

    int vetorA[10], vetorB[10], i, j=9;

    gerarVetorInteiros(vetorA, 10, 10);
    printf("=== VETOR A ===\n");
    mostrarVetorInteiros(vetorA, 10);

    for(i=0; i<10; i++){
        vetorB[j]=vetorA[i];
        j--;
    }

    printf("\n=== VETOR B ===\n");
    mostrarVetorInteiros(vetorB, 10);

    return 0;
}
