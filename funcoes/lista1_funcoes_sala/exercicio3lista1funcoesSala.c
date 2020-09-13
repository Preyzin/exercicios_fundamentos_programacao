#include <stdio.h>
#include "Fatorial.h"

int main()
{
    int num;
    printf("\nInforme um numero: ");
    scanf("%d", &num);

    fat(num);

    mostraFat(num);
    return 0;
}
