/*
7) Elaborar um programa que l� dois valores, verifica se o primeiro � m�ltiplo do segundo
e escreve a mensagem "S�o m�ltiplos" ou "N�o s�o m�ltiplos" dependendo da condi��o.
Verificar para que n�o seja realizada uma divis�o por zero. Nesse caso, informar que n�o
� poss�vel realizar uma divis�o por zero.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;

    printf("\nDiga um numero: ");
    scanf("%d", &n1);
    printf("\nDiga outro numero: ");
    scanf("%d", &n2);
    if(n2==0){
        printf("\nNao eh possivel realizar uma divisao por zero!!!");
    }
    else if(n1%n2==0){
        printf("\nOs numeros informados sao multiplos");
    }
    else{
        printf("\nOs numeros informados nao sao multiplos");
    }

    return 0;
}
