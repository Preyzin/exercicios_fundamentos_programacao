#include <stdio.h>
#include "vetores.h"

int main(void)
{
    int vetorA[7], vetorB[7], i;
    char conf;

    do
    {
        gerarVetorInteiros(vetorA, 7, 10);
        printf("=== VETOR A ===\n");
        mostrarVetorInteiros(vetorA, 7);

        for(i=0; i<7; i++)
        {
            vetorB[i]=vetorA[i]*i;

        }
        printf("\n=== VETOR B ===\n");
        mostrarVetorInteiros(vetorB, 7);

        printf("\nDeseja executar o programa novamente: \n");
        scanf(" %c", &conf);
    }
    while(conf=='s' || conf=='S');

    return 0;
}
