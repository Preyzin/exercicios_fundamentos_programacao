/*
2) Ler dois valores num�ricos e apresentar a diferen�a entre eles. A diferen�a sempre �
positiva, portanto, o menor � subtra�do do maior n�o importando a ordem em que os
n�meros s�o informados.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n1, n2;

    printf("\nInforme um numero: ");
    scanf("%d", &n1);
    printf("\nInforme outro numero: ");
    scanf("%d", &n2);

    if(n1<n2){
        printf("\nA diferenca entre %d - %d = %d", n2, n1, n2-n1);
    }
    else{
        printf("\nA diferenca entre %d - %d = %d", n1, n2, n1-n2);
    }



    return 0;
}
