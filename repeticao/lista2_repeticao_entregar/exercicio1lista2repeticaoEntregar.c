/*
1) Ler dois valores que representam os limites de um intervalo. Mostrar os números pares
e divisíveis por 3 desse intervalo em ordem crescente. Por exemplo: informados 2 e 30
como limites, mostrar: 6, 12, 18, 24, 30. O usuário pode informar os valores em qualquer
ordem.
*/

#include <stdio.h>

int main (void)
{
    int lim1, lim2, i, aux;

    printf("\nInforme o limite inferior: ");
    scanf("%d", &lim1);
    printf("\nInforme o limite superior: ");
    scanf("%d", &lim2);

    if(lim2<lim1){
        aux=lim1;
        lim1=lim2;
        lim2=aux;
    }

    for(i=lim1; i<=lim2; i++){
        if(i%2==0){
            if(i%3==0){
                printf("%d\t", i);
            }
        }
    }

    return 0;
}
