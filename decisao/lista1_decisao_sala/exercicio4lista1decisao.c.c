/*
4) Escreva um programa que leia um número e verifique se ele se encontra no intervalo
entre 5 e 20. Mostre uma mensagem se o número estiver nesse intervalo.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("\nInforme um numero: ");
    scanf("%d", &num);

    if(num >=5 && num <= 20){
        printf("\nO numero %d se encontra dentro do intervalo entre 5 e 20", num);
    }

    return 0;
}
