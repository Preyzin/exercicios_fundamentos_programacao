/*
2) Ler dois valores numéricos e apresentar a diferença entre eles. A diferença sempre é
positiva, portanto, o menor é subtraído do maior não importando a ordem em que os
números são informados.
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
