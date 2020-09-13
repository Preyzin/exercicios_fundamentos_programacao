#include <stdio.h>
#include "vetores.h"

int main(void)
{
    int tamanhoA, tamanhoB, tamanhoC, i, j=0;

    do{
        printf("Informe o tamanho para o vetor A: \n");
        scanf("%d", &tamanhoA);
    }while(tamanhoA<=0);

    int vetorA[tamanhoA];

    do{
        printf("Informe o tamanho para o vetor B: \n");
        scanf("%d", &tamanhoB);
    }while(tamanhoB<=0);

    int vetorB[tamanhoB];

    gerarVetorInteiros(vetorA, tamanhoA, 20);
    gerarVetorInteiros(vetorB, tamanhoB, 15);
    printf("=== Vetor A ===\n");
    mostrarVetorInteiros(vetorA, tamanhoA);
    printf("\n\n=== Vetor B ===\n");
    mostrarVetorInteiros(vetorB, tamanhoB);

    if(tamanhoA>=tamanhoB){
        tamanhoC=tamanhoA;
    }
    else{
        tamanhoC=tamanhoB;
    }

    int vetorC[tamanhoC];

    for(i=0; i<tamanhoC; i++){

        if(vetorA[i]>vetorB[i]){
            vetorC[j]=1;
            j++;
        }
        else if(vetorA[i]==vetorB[i]){
            vetorC[j]=0;
            j++;
        }
        else if(vetorA[i]<vetorB[i]){
            vetorC[j]=-1;
            j++;
        }
    }

    printf("\n\n=== Vetor C ===\n");
    mostrarVetorInteiros(vetorC, tamanhoC);

    return 0;
}
