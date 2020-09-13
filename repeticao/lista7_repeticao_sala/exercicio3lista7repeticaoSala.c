#include <stdio.h>
#include <math.h>

int main()
{
    int num, n=1, mtp=0;

    printf("\nInforme um numero: ");
    scanf("%d", &num);


    while(mtp<250){

        mtp=num*pow(2, n);
        if(mtp<250){
        printf("%d * 2 = %d\n", num, mtp);
        n++;
        }
    }

    return 0;
}
