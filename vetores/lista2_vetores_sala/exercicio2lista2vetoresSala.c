#include <stdio.h>
#include "vetores.h"

int main(void)
{
    int vetorA[8], vetorB[8], i;
    char conf;

    do
    {
        gerarVetorInteiros(vetorA, 8, 10);
        printf("=== VETOR A ===\n");
        mostrarVetorInteiros(vetorA, 8);


        for(i=0; i<vetorA; i++)
        {
            vetorB[i]=vetorA[i]*2;
        }

        printf("\n=== VETOR B ===\n");
        mostrarVetorInteiros(vetorB, 8);

        printf("\nDeseja executar o programa novamente: \n");
        scanf(" %c", &conf);
    }
    while(conf=='S' || conf=='s');

    return 0;
}
