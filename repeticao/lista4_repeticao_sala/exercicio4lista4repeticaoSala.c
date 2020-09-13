#include <stdio.h>

int main()
{
    int num, cont=0, sum=0, contimpar=0;
    float media;

    do{
        printf("\nInforme um numero: ");
        scanf("%d", &num);
        if(num!=0){
            if(num<0){
                cont++;
                sum+=num;
            }
            else{
                if(num%2!=0){
                    contimpar++;
                }
            }
        }

    }while(num!=0);

    media=sum/cont;

    printf("\nA media dos numeros negativos eh: %.2f", media);
    printf("\nForam informados %d numeros positivos que sao impares", contimpar);

    return 0;
}
