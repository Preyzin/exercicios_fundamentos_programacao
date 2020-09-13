#include <stdio.h>

int main()
{
    int i, vezes, contpar;
    do{
        printf("\nInforme um numero para a quantidade de numeros pares a serem mostrados: ");
        scanf("%d", &vezes);

        if(vezes>=0){

            for(i=1;i<=vezes*2; i++){
                if(i%2==0){
                    printf("%d\t", i);
                }
            }
        }


    }while(vezes<=0);

    return 0;
}
