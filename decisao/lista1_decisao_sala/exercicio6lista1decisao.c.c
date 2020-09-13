/*
6) Elaborar um programa que leia um valor que se refere à altura de uma pessoa e mostre
uma mensagem conforme a tabela a seguir. Utilizar variável do tipo float.
Altura Informação mostrada
Menor que 1,50 "Altura abaixo de um metro e cinquenta centímetros"
De 1,50 a 1,80 "Altura entre um metro e cinquenta e um metro e oitenta
centímetros"
Maior que 1,80 "Altura acima de um metro e oitenta centímetros"
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura;

    printf("\nInforme a altura de uma pessoa (em metros): ");
    scanf("%f", &altura);

    if(altura<1.50){
        printf("\nAltura abaixo de um metro e cinquenta centimetros");
    }
    else if(altura>=1.50 && altura<=1.80){
        printf("\nAltura entre um metro e cinquenta e um metro e oitenta centimetros: ");
    }
    else{
        printf("\nAltura acima de um metro e oitenta centimetros: ");
    }
    return 0;
}
