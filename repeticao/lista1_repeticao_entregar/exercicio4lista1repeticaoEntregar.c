/*
4) Elabore um programa que permita ao usuário fornecer 30 números quaisquer e
apresente:
a) A soma dos 10 primeiros números.
b) A soma do 11º número até o 20º número.
c) A soma do 21º número até o 30º número.
d) A soma de todos os números.
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
    printf("\nA soma do 11º número até o 20º número: %d", sum20);
    printf("\nA soma do 21º número até o 30º número: %d", sum30);
    printf("\nA soma de todos os numeros eh: %d", sumAll);



    return 0;
}
