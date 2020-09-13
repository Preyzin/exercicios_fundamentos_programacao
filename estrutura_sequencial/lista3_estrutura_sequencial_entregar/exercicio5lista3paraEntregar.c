/*
5) Ler um número inteiro com até 3 dígitos.
Separar os dígitos desse número e mostrá-los em linhas distintas.
Na sequência calcular e mostrar o inverso do número.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, a, b, c, inv;

    printf("\nInsira um numero inteiro de até tres digitos: ");
    scanf("%d", &num);
    printf("\n%d eh o primeiro numero", num/100);
    printf("\n%d eh o segundo numero", num%100/10);
    printf("\n%d eh o terceiro numero", num%10);
    a=num/100;
    b=num%100/10;
    c=num%10;
    inv=(a)+(b*10)+(c*100);
    printf("\nO inverso do numero eh: %d", inv);

    return 0;
}
