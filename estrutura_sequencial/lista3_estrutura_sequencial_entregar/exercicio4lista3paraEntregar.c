/*
4) Ler um n�mero inteiro com at� 5 d�gitos.
Separar os d�gitos desse n�mero e mostr�-los em linhas distintas.
Tamb�m calcular e mostrar a soma dos d�gitos.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, soma;

    printf("\nInsira um numero inteiro de at� cinco digitos: ");
    scanf("%d", &num);


    printf("\n%d eh o primeiro numero", num/10000);
    printf("\n%d eh o segundo numero", num%10000/1000);
    printf("\n%d eh o terceiro numero", num%1000/100);
    printf("\n%d eh o quarto numero", num%100/10);
    printf("\n%d eh o quarto numero", num%10);

    soma=(num/10000)+(num%10000/1000)+(num%1000/100)+(num%100/10)+(num%10);

    printf("\nA soma dos digitos eh: %d", soma);
    return 0;
}
