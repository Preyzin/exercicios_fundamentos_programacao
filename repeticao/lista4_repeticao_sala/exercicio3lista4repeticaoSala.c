#include <stdio.h>

int main()
{
    int num, cont=0;

    do{
        printf("\nInforme um numero: ");
        scanf("%d", &num);
        if(num>0){
            if(num%2==0 && num%5==0){
                cont++;
            }
        }

    }while(num>0);

    printf("\nNumero de numeros divisiveis por 5 e pares: %d", cont);

    return 0;
}
