/*
1) Ler um n�mero inteiro e calcular e apresentar o seu m�dulo ou valor absoluto (n�mero
sem sinal), isto �, se o n�mero � negativo apresent�-lo como positivo.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("\nDiga um numero para saber o seu modulo: ");
    scanf("%d", &num);

    if(num<0){
        printf("\nO modulo de %d eh: %d", num, num*-1);
    }
    else{
        printf("\nO modulode de %d eh: %d", num, num);

    }

    return 0;
}
