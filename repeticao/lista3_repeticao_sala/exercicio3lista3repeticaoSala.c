#include <stdio.h>

int main(void)
{
    int n, i;
    float soma=1;

    printf("\nInforme um numero: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        soma+=1.0/i;
    }
    printf("\nSoma: %.2f", soma);

    return 0;
}
