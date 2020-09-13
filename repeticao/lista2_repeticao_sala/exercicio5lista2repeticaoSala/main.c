#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, maior, i;

    printf("\nInforme um valor: ");
    scanf("%d", &num);

    maior=num;

    for(i=0;i<4;i++){


        printf("\nInforme um valor: ");
        scanf("%d", &num);
        if(num>maior){
            maior=num;
        }
    }
    printf("\nMaior: %d", maior);

    return 0;
}
