#include <stdio.h>

int main()
{
    int num, cont, i;
    char conf;

    do{
        cont=0;
        do{
            printf("\nInforme a quantidade de numeros primos que serao mostrados: ");
            scanf("%d", &num);
            if(num>0){

                for(i=1; i<=num; i++){

                    if(num%i==0){
                        cont++;
                    }
                    if(cont==2){
                        printf("\n%d\t", i);
                    }
                }


            }


        }while(num<=0);
        printf("\nS para continuar com a execusao");
        fflush(stdin);
        scanf("%c", &conf);
    }while(conf=='S' || conf=='s');

    return 0;
}
