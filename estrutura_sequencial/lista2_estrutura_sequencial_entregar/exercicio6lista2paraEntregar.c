/*
6) Uma pessoa resolveu fazer uma aplica��o em uma poupan�a programada. Para
calcular seu rendimento, ela dever� fornecer o valor constante da aplica��o mensal, a
taxa e o n�mero de meses. Sabendose
que a f�rmula usada para este c�lculo �:
Onde: i = taxa, P = valor da aplica��o mensal e n= n�mero de meses.
Obs.: Para a pot�ncia usar a fun��o pow() da biblioteca math.h.
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
