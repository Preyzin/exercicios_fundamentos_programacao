#include <stdio.h>

int main()
{
    float ingresso;
    int pessoas;

    printf("\nInforme a quantidade de pessoas: \n", pessoas);
    scanf("%d", &pessoas);

    printf("VALOR DO INGRESSO\tVALOR TOTAL RECEBIDO");
    for(ingresso=15.0; ingresso<=20.0; ingresso+=0.50){
        printf("\nRS %.2f\t\tRS %.2f", ingresso, ingresso*pessoas);
    }




    return 0;
}
