#include <stdio.h>

int main()
{
    int num, i, cont, sum, n, cont1;
    char conf;

    do{
        cont=0;
        sum=0;
        cont1=0;

        do{
            printf("\nInforme a quantidade de numeros impares a serem mostrados: \n");
            scanf("%d", &num);
            if(num<=0){
                printf("\nNumero invalido");
            }

        }while(num<=0);
        do{
            printf("\nInforme a quantidade de elementos por linha: ");
            scanf("%d", &n);
            if(n<=0){
                printf("\nValor invalido");
            }
        }while(n<=0);

        for(i=1; i<=num*2; i++){
            if(i%2!=0){
                printf("\t%d", i);
                cont++;
                sum+=i;
                cont1++;
                if(cont1==n){
                printf("\n");
                cont1=0;
                }

            }


        }

        printf("\nMedia: %.2f", (float)sum/cont);

        printf("\nDeseja continuar a execusao (S ou N): ");
        fflush(stdin);
        scanf("%c", &conf);
    }while(conf=='s' || conf=='S');

    return 0;
}
