/*
4) Elabore um programa que permita ao usu�rio fornecer 30 n�meros quaisquer e
apresente:
a) A soma dos 10 primeiros n�meros.
b) A soma do 11� n�mero at� o 20� n�mero.
c) A soma do 21� n�mero at� o 30� n�mero.
d) A soma de todos os n�meros.
*/

#include <stdio.h>

int main()
{
    int cont=0, n, sum10=0, sum20=0, sum30=0, sumAll=0;

    while(cont<=30){
        printf("\nInforme um numero: ");
        scanf("%d", &n);
        cont++;
        if(cont<=10){
            sum10+=n;
        }
        if(cont>10 && cont<=20){
            sum20+=n;
        }
        if(cont>20 && cont<=30){
            sum30+=n;
        }

    }
    sumAll=sum10+sum20+sum30;
    printf("\nA soma dos 10 primeiros numeros: %d", sum10);
    printf("\nA soma do 11� n�mero at� o 20� n�mero: %d", sum20);
    printf("\nA soma do 21� n�mero at� o 30� n�mero: %d", sum30);
    printf("\nA soma de todos os numeros eh: %d", sumAll);



    return 0;
}
