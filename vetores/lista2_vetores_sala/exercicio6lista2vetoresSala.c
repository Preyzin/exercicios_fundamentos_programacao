#include <stdio.h>
#include "vetores.h"


int main()
{
    int vetor[10], sum=0, cont100=0, sum100=0, cont=0, i;

    gerarVetorInteiros(vetor, 10, 200);

    printf("=== VETOR ===\n");
    mostrarVetorInteiros(vetor, 10);

    for(i=0; i<10; i++){
        if(vetor[i]<100){
            sum+=vetor[i];
        }
        else if(vetor[i]==100){
            cont100++;
        }
        else if(vetor[i]>100){
            cont++;
            sum100+=vetor[i];
        }
    }
    printf("\nSoma dos valores menores do que 100: %d\n", sum);
    printf("Quantidade de valores iguais a 100: %d\n", cont100);
    if(cont>0){
        printf("Media dos valores maiores que 100: %.2f\n", (float)sum100/cont);
    }
    else{
        printf("Nao ha numeros maiores do que 100 no vetor\n");
    }

    return 0;
}
