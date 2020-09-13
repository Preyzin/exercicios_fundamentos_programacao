#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, mtp=0;

    printf("\nInforme um numero: ");
    scanf("%d", &num);

    while(mtp<=10){
        printf("\n%d X %d = %d", num, mtp, num*mtp);
        mtp++;
    }

    return 0;
}
