/*
1) Ler três valores inteiros diferentes, encontrar e mostrar o menor deles. Deve ser criada
uma variável para armazenar o menor número.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, aux;

    printf("\nDiga um numero inteiro: ");
    scanf("%d", &a);
    printf("\nDiga um numero inteiro: ");
    scanf("%d", &b);
    printf("\nDiga um numero inteiro: ");
    scanf("%d", &c);

    if(a<b){
        if(a<c){
            aux=a;
            printf("\nO menor numero eh: %d", aux);
        }
    }
    else if(b<c){
        if(b<a){
            aux=b;
            printf("\nO menor numero eh: %d", aux);
        }
    }
    else if(c<a){
        if(c<b){
            aux=c;
            printf("\nO menor numero eh: %d", aux);
        }
    }


    return 0;
}
