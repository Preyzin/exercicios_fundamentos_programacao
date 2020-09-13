/*
7) Elaborar um programa que lê dois valores, verifica se o primeiro é múltiplo do segundo
e escreve a mensagem "São múltiplos" ou "Não são múltiplos" dependendo da condição.
Verificar para que não seja realizada uma divisão por zero. Nesse caso, informar que não
é possível realizar uma divisão por zero.
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
