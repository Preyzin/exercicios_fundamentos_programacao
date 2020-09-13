#include <stdio.h>

int main()
{
    int num, cont=0;

    do{
        printf("\nInforme um numero: ");
        scanf("%d", &num);
        printf("%d x %d = %d", cont, num, cont*num);
        cont++;
    }while(cont<=10);


    return 0;
}
