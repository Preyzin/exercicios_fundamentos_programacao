/*
2) Ler tr�s valores inteiros diferentes, encontrar e mostrar o n�mero do meio. Deve ser
criada uma vari�vel para armazenar esse n�mero.
Exemplo: Seja num1 = 5, num2 = 8 e num3 = 1, ent�o o n�mero do meio � 5.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, aux;

    printf("\nInsira um numero: ");
    scanf("%d", &n1);
    printf("\nInsira um numero: ");
    scanf("%d", &n2);
    printf("\nInsira um numero: ");
    scanf("%d", &n3);

    if(n1<n2 && n1>n3){
        aux=n1;
        printf("\nO numero do meio eh: %d", aux);
    }
    else if(n2<n1 && n2>n3){
        aux=n2;
        printf("\nO numero do meio eh: %d", aux);
    }
    else if(n3<n1 && n3>n2){
        aux=n3;
        printf("\nO numero do meio eh: %d", aux);
    }
    else{
        printf("\nValor invalido");
    }




    return 0;
}
