/*
6) Uma pessoa resolveu fazer uma aplicação em uma poupança programada. Para
calcular seu rendimento, ela deverá fornecer o valor constante da aplicação mensal, a
taxa e o número de meses. Sabendose
que a fórmula usada para este cálculo é:
Onde: i = taxa, P = valor da aplicação mensal e n= número de meses.
Obs.: Para a potência usar a função pow() da biblioteca math.h.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float aplicacao, tRendimento, meses, valorAcumulado;

    printf("\nInforme o valor da aplicacao: R$ ");
    scanf("%f", &aplicacao);
    printf("\nInforme a taxa de rendimento (entre 0 e 1): ");
    scanf("%f", &tRendimento);
    printf("\nInforme o numero de meses: ");
    scanf("%f", &meses);

    valorAcumulado = aplicacao * pow((1+tRendimento), meses);

    printf("\nO valor acumulado eh: R$ %.2f", valorAcumulado);

    return 0;
}
