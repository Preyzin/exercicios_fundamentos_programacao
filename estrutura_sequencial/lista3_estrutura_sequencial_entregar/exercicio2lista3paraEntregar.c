/*
2) Fazer um programa para ler o salário de uma pessoa, o percentual de aumento e o percentual de descontos.
Os descontos incidem sobre o salário com aumento. Calcular o novo salário e mostrá-lo como no exemplo a seguir.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal, aumento, desc, sal_aumento, sal_liquid, salint, saldec;


    printf("\nInforme o valor do salario: R$ ");
    scanf("%f", &sal);
    printf("\nInforme o percentual de aumento (Ex: 10 para 10%%): ");
    scanf("%f", &aumento);
    printf("\nInforme o percentual de desconto (Ex: 5 para 5%%): ");
    scanf("%f", &desc);

    sal_aumento=(sal*(aumento/100)+sal);
    printf("\nSalario aumentado: R$ %.2f", sal_aumento);
    sal_liquid=sal_aumento-(sal_aumento*(desc/100));
    printf("\nSalario liquido: R$ %.2f", sal_liquid);

    salint=(int)sal_liquid;
    saldec=sal_liquid-salint;


    printf("\nO salario liquido eh %.0f reais e %.0f centavos", salint, saldec*100);

    return 0;
}
