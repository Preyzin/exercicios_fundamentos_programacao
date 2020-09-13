/*
1) A contribuição para o INSS é calculada da seguinte forma:
a) Salário bruto até três salários mínimos = INSS 8%.
b) Salário bruto acima de três salários mínimos = INSS 10%.
c) Para as contribuições maiores que o salário mínimo, considerar a importância de um
salário mínimo.
Elaborar um programa que receba como entrada o valor do salário mínimo e o valor do
salário bruto, calcule o INSS e o salário líquido restante e informe-os.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salmin, salbrut, contri;

    printf("\nInfomer o valor do salario minimo: ");
    scanf("%lf", &salmin);
    printf("\nInfomer o valor do salario bruto: ");
    scanf("%lf", &salbrut);


    if(salbrut <= 3*salmin){
        contri=salbrut*0.08;
        if(contri<salmin){
            printf("\nO INSS a pagar eh: %.2lf", contri);
            printf("\nSalario liquido restante: %.2lf", salbrut-contri);
        }
        else{
            printf("\nConsidere a importancia de um salario minimo");
        }
    }
    else if(salbrut > salmin*3){
        contri=salbrut*0.1;
        if(contri<salmin){
            printf("\nO INSS a pagar eh: %.2lf", contri);
            printf("\nSalario liquido restante: %.2lf", salbrut-contri);
        }
        else{
            printf("\nConsidere a importancia de um salario minimo");
        }

    }
    else{
        printf("\nNao atingiu o minimo para contribuir com o INSS");
    }


    return 0;
}
