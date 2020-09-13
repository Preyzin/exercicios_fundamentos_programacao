/*
1) A contribui��o para o INSS � calculada da seguinte forma:
a) Sal�rio bruto at� tr�s sal�rios m�nimos = INSS 8%.
b) Sal�rio bruto acima de tr�s sal�rios m�nimos = INSS 10%.
c) Para as contribui��es maiores que o sal�rio m�nimo, considerar a import�ncia de um
sal�rio m�nimo.
Elaborar um programa que receba como entrada o valor do sal�rio m�nimo e o valor do
sal�rio bruto, calcule o INSS e o sal�rio l�quido restante e informe-os.
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
