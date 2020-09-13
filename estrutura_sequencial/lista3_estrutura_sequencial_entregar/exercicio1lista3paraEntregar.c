/*
1) Fazer um programa que leia um valor double que representa o salário de uma pessoa. Apresente separadamente os reais (parte inteira) e os centavos (parte decimal).
Observação: Apresentar os centavos como inteiro de dois dígitos (exemplo: 40 em vez de 0.40)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sal;
    int cent;

    printf("\nInforme o valor do salario: R$ ");
    scanf("%lf", &sal);
    cent=(sal-(int)sal)*100;

    printf("\nSalario informado: R$ %.2lf", sal);
    printf("\nReais: %d", (int)sal);
    printf("\nCentavos: %d", cent);

    return 0;
}
