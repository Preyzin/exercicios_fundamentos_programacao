/*
1) Elaborar um programa para mostrar os n�meros pares entre 20 e 100. Fazer a m�dia
dos valores desse intervalo que s�o divis�veis por 5.
*/

#include <stdio.h>

int main()
{
    int i, cont=0, soma=0;
    float media;

    for(i=20; i<=100; i++){
        if(i%2==0){
            printf("%d\t", i);
        }
        if(i%5==0){
            cont++;
            soma+=i;
            media=soma/cont;
        }
    }
    printf("\nMedia: %.2f", media);



    return 0;
}
