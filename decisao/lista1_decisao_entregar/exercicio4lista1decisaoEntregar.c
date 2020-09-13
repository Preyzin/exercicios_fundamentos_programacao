/*
4) Ler um número double:
a) Se o número lido é menor que 100, separar a parte inteira e a parte decimal e mostrálas
separadamente.
b) Se o número lido é maior ou igual a 100, obter o resto da divisão desse número por 3 e
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
