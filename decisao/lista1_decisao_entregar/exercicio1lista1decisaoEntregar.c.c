/*
1) Ler um número inteiro e calcular e apresentar o seu módulo ou valor absoluto (número
sem sinal), isto é, se o número é negativo apresentá-lo como positivo.
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
        printf("\nO modulo de %d eh: %d", num, num);

    }

    return 0;
}
