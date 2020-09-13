#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int fatorial=1;
    int num, cont=1;

    printf("\nInforme um numero: ");
    scanf("%d", &num);

    while(cont<=num){
        fatorial*=cont;
        cont++;
    }

    printf("\nFatorial de %d eh: %lld", num, fatorial);

    return 0;
}
