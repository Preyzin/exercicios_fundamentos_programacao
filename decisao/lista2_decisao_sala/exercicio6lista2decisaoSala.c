/*
6) Ler tr�s valores inteiros que representam os lados de um tri�ngulo e determinar se
esses valores podem formar um tri�ngulo (obs.: para ser um tri�ngulo cada lado deve ser
menor que a soma dos outros dois lados). Se for um tri�ngulo, determinar o seu tipo:
equil�tero (todos os lados iguais), is�sceles (dois lados iguais) e escaleno (todos os lados
diferentes).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l1, l2, l3;

    printf("\nInforme o comprimento de um dos lados do triangulo: ");
    scanf("%d", &l1);
    printf("\nInforme o comprimento de um dos lados do triangulo: ");
    scanf("%d", &l2);
    printf("\nInforme o comprimento de um dos lados do triangulo: ");
    scanf("%d", &l3);
    if(l1<(l2+l3) && l2<(l1+l3) && l3<(l1+l2)){
        if(l1==l2 && l1==l3 && l2==l3){
            printf("\nAs medidas sao de um triangulo equilatero");
        }
        else if(l1!=l2 && l1!=l3 && l2!=l3){
            printf("\nAs medidas sao de um triangulo escaleno");
        }
        else{
            printf("\nAs medidas sao de um triangulo isoceles");
        }
    }
    else{
        printf("\nPara ser um triangulo cada lado deve ser menor do que a soma do outros dois lados");
    }

    return 0;
}
