#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=1, maior=0, menor=0;


    while(n!=0){

        printf("\nInforme um numero: ");
        scanf("%d", &n);

        if(n!=0){
            if(menor==0){
            menor=n;
            }
            else if(n<menor){
                menor=n;
            }
        }
        if(n>maior){
            maior=n;
        }



    }
    printf("\nMaior: %d", maior);
    printf("\nMenor: %d", menor);



    return 0;
}
