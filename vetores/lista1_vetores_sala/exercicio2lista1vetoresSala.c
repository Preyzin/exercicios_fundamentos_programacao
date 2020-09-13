#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "vetores.h"

int main(void)
{
    int  tamanho, limite, menor, i, contPar, somaPar;
    float media;

    do{
        printf("Informe o tamanho do vetor: \n");
        scanf("%d", &tamanho);
    }while(tamanho<=0);

    int vetor[tamanho];

    do{
        printf("Informe o valor de n: \n");
        scanf("%d", &limite);
    }while(limite<=0);

    printf("VETOR GERADO\n");

    geraVetor(vetor, tamanho, limite);

    mostraVetor(vetor, tamanho);

    menor=vetor[0];
    for(i=0; i<tamanho; i++){
        if(vetor[i]<menor){
            menor=vetor[i];
        }
        if(vetor[i]!=0){
            if(vetor[i]%2==0){
                contPar++;
                somaPar+=vetor[i];
            }
        }
    }
    printf("\nMenor: %d\n", menor);
    printf("\nMedia dos pares: %.2f", (float)somaPar/contPar);


    return 0;
}
