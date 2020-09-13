/*
6) Ler três valores inteiros que representam os lados de um triângulo e determinar se
esses valores podem formar um triângulo (obs.: para ser um triângulo cada lado deve ser
menor que a soma dos outros dois lados). Se for um triângulo, determinar o seu tipo:
equilátero (todos os lados iguais), isósceles (dois lados iguais) e escaleno (todos os lados
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
