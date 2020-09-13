#include <stdio.h>

int main()
{
    float mi;
    int min;

    min=0;

    printf("\nInforme o valor da massa inicial: ");
    scanf("%f", &mi);

    while(mi>0.5){
        mi=mi/2;
        min++;
    }
    printf("\n%d", min);

    return 0;
}
