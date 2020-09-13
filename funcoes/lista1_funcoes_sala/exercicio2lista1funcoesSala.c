#include <stdio.h>
#include "Primo.h"
int main()
{
    int num;

    do{
        printf("\nInforme um numero positivo para saber se eh primo: ");
        scanf("%d", &num);

    }while(num<=0);


    if(primo(num)==0){
        printf("\nO %d eh primo\n", num);
    }
    else if(primo(num)==1){
        printf("\nO %d nao eh primo\n", num);
    }

    calcPrimo();

    mediaPrimo();

    return 0;
}
