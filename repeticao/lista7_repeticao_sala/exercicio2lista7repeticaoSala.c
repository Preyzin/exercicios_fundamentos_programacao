#include <stdio.h>

int main()
{
    int num, i, j, cont=0;

    printf("\nInformer um numero: ");
    scanf("%d", &num);

    for(i=1; i<=6; i++){

        for(j=1; j<=6; j++){
            if(i+j==num){
                cont++;
                printf("\n%d + %d = %d", i, j, i+j);
            }

        }
        j=1;
    }
    printf("\nNumero de posibilidades: %d", cont);

    return 0;
}
