#include <stdio.h>


int main()
{
    int num, i, soma=0;

    printf("Informe um numero: ");
    scanf("%d", &num);

    for(i=1; i<num; i++){
        if(num%i==0){
            printf("\n%d", i);
            soma+=i;
        }
    }
    printf("\n----\n%d", soma);
    if(soma>num){
        printf("\n%d eh abundante porque a soma de seus divisores eh maior do que %d", num, num);
    }
    else{
        printf("\n%d nao eh abundante porque a soma de seus divisores eh menor do que %d", num, num);
    }

    return 0;
}
