#include <stdio.h>
#include <stdlib.h>

int main(void){

    int x;

    do{
        printf("\nInforme um numero: ");
        scanf("%d", &x);

        if(x > 0){
            int cont = 0;
            int num = x;
            while(num != 0){
                cont++;
                num /= 10;
            }
            printf("%O numero tem %d digitos\n", cont);

        }

    }while(x > 0);

    return 0;
}
