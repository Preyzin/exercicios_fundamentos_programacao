/*
2) Elaborar um programa para mostrar, em ordem decrescente, os n�meros divis�veis por
3 entre 200 e 100.
*/

#include <stdio.h>

int main()
{
    int i;

    for(i=200; i>=100; i--){
        if(i%3==0){
            printf("%d\t", i);
        }
    }


    return 0;
}
