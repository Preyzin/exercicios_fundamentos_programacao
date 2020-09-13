/*
4) Mostrar os valores ímpares e divisíveis por 7 entre 500 e 0 em ordem decrescente.
Obter a média dos pares e divisíveis por 3 desse intervalo.
*/

#include <stdio.h>

int main(void)
{
    int i, cont=0, sum=0;
    float media;

    for(i=500; i>=0; i--){

        if(i%2!=0 && i%7==0){
            printf("Impar e divisivel por 7: %d\n", i);
        }
        else if(i%2==0 && i%3==0){
            cont++;
            sum+=i;
        }

    }
    media=sum/cont;
    printf("\nMedia dos pares e divisiveis por 3: %.2f", media);




    return 0;
}
