/*
2) Escreva um programa que leia um n�mero e verifique se ele � maior, menor ou igual a 10.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("\nDiga um numero: ");
    scanf("%d", &num);

    if(num==10){
        printf("\nO numero %d eh igual a 10", num);
    }
    else{
        if(num<10){
            printf("\nO numero %d eh menor que 10", num);
        }
        if(num>10){
            printf("\nO numero %d eh maior que 10", num);
        }
    }


    return 0;
}
