#include <stdio.h>

int main()
{
    int i, num, contador=0;

    printf("\nInforme um numero para saber se ele eh primo: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        if(num%i==0){
            contador++;
        }
    }
    if(contador==2){
        printf("\nO numero %d eh primo", num);
    }
    else{
        printf("\nO numero %d nao eh primo", num);
    }



    return 0;
}
