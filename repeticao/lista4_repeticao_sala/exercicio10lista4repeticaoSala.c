#include <stdio.h>

int main()
{
    int num, soma=0;

    do{
        printf("\nInforme um numero positivo: ");
        scanf("%d", &num);

        if(num>0){
            soma+=num;
        }
    }while(num>0);

    printf("\nSoma: %d", soma);

    return 0;
}
