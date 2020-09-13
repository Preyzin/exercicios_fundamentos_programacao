#include <stdio.h>
#include "vetores.h"

int main(void)
{
    int vetor[121], i, menor, maior, soma=0, cont=0;

    gerarVetorInteiroComLimite(vetor, 121, 5, 45);

    printf("==== VETOR ====\n");
    mostrarVetorInteiros(vetor, 121);

    menor = vetor[0];
    maior = vetor[0];
    for(i=0; i<121; i++){
        if(vetor[i]<menor){
            menor=vetor[i];
        }
        if(vetor[i]>maior){
            maior=vetor[i];
        }
        soma+=vetor[i];
    }

    printf("\nMenor temperatura ocorrida: %d\n", menor);
    printf("Maior temperatura ocorrida: %d\n", maior);
    float media = (float)soma/121;
    printf("Temperatura media: %.2f\n", media);

    for(i=0; i<121; i++){
        if(vetor[i]<media){
            cont++;
        }
    }

    printf("Quantidade de dias em que a temperatura foi menor que a media: %d\n", cont);

    return 0;
}
