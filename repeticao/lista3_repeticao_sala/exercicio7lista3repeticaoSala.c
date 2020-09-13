#include <stdio.h>

int main()
{
    int n, cont=0, par=0, impar=0, divisete=0;

    do{
        printf("\nInforme um numero: ");
        scanf("%d", &n);
        cont++;

        if(n%2==0){
            par++;
        }
        if(n%2!=0){
            impar++;
        }
        if(n%7==0){
            divisete++;
        }

    }while(cont<10);

    printf("\nNumero de pares: %d", par);
    printf("\nNumero de impares: %d", impar);
    printf("\nNumero de divisiveis por 7: %d", divisete);


    return 0;
}
