/*
3) Mostrar os números entre 10 e 0 (ordem decrescente) com intervalo de 0.5.
*/

#include <stdio.h>

int main()
{
    float n=10;

    while(n>0){
        n-=0.5;
        printf("%.2f\t", n);
    }

    return 0;
}
