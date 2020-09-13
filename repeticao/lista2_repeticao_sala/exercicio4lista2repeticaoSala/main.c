#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, cont=0, sum;
    float media;

    for(i=10;i<=500; i++){
        if(i%4==0 || i%10==0){
            cont++;
            printf("\nNumero divisivel por quatro ou multiplo de 10: %d", i);
            sum+=i;
        }
    }
    media=sum/cont;
    printf("\nMedia: %.2f", media);

    return 0;
}
