#include <stdio.h>

int main()
{
    int i=100, cont=0, soma=0;
    float media;

    while(i>=0){
        printf("%d\t", i);

        cont++;
        soma+=i;
        i--;
    }

    media=soma/cont;

    printf("\nMedia: %.2f", media);

    return 0;
}
