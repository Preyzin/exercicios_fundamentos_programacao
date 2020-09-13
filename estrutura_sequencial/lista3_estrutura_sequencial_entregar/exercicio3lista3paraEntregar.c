/*
3) Ler um número inteiro com até 4 dígitos. Separar os dígitos desse número e mostrá-los em linhas distintas.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("\nInsira um numero inteiro de até quatro digitos: ");
    scanf("%d", &num);
    printf("\n%d eh o primeiro numero", num/1000);
    printf("\n%d eh o segundo numero", num%1000/100);
    printf("\n%d eh o terceiro numero", num%100/10);
    printf("\n%d eh o quarto numero", num%10);

    return 0;
}
