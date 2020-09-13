/*
5) Calcular o imposto de renda de uma pessoa de acordo com a seguinte tabela:
Renda anual Al�quota*
At� R$ 10.000,00 0%
> R$ 10.000,00 e <= R$ 25.000,00 10%
Acima de R$ 25.000,00 25%
*Al�quota � o percentual para realizar o c�lculo do imposto de renda a ser pago.
Se informado valor negativo, n�o realizar o c�lculo e informar o usu�rio.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double rendaAnual;

    printf("\nInforme a renda anual: R$ ");
    scanf("%lf", &rendaAnual);
    if(rendaAnual>25000.00){
        printf("\nImposto a pagar com renda anual de R$ %.2lf eh: R$ %.2lf", rendaAnual, rendaAnual*0.25);
    }
    else if(rendaAnual>10000.00 && rendaAnual<=25000.00){
        printf("\nImposto a pagar com renda anual de R$ %.2lf eh: R$ %.2lf", rendaAnual, rendaAnual*0.1);
    }
    else if(rendaAnual>=0.00 && rendaAnual<=10000.00){
        printf("\nA renda anual de R$ %.2lf nao atinge o minimo para pagar impostos", rendaAnual);
    }
    else{
        printf("\nValor invalido para calculo do imposto");
    }

    return 0;
}
