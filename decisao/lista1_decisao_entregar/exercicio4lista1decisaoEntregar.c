/*
4) Ler um n�mero double:
a) Se o n�mero lido � menor que 100, separar a parte inteira e a parte decimal e mostr�las
separadamente.
b) Se o n�mero lido � maior ou igual a 100, obter o resto da divis�o desse n�mero por 3 e
mostrar o resto.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num;
    int decimal;

    printf("\nDiga um numero: ");
    scanf("%lf", &num);

    if(num < 100){
        decimal = (num - (int)num)*100;
        printf("\nParte inteira %d, parte decimal %d", (int)num, decimal);
    }
    else{
        printf("\nResto da divisao de %.2lf por 3 = %d", num, (int)num%3);

    }


    return 0;
}
