/*
5) Copiar todas as funções criadas nos exercícios anteriores para dentro de uma biblioteca chamada
"diversos.h". Fazer um programa que use essa biblioteca e tenha o seguinte menu de opções (use switchcase):
1 - Calcula o quadrado de um numero
2 - Converte centímetros para polegadas
3 - Converte um valor para dólar ou real
4 - Multiplica dois números
*/

#include <stdio.h>
#include "diversos.h"

int main(void)
{
    char conf, tipo;
    int opcao, intnum, n1, n2;
    float floatnum, cotacao;

    do
    {
        printf("1 - Calcula o quadrado de um numero\n2 - Converte centimetros para polegadas\n3 - Converte um valor para dolar ou real\n4 - Multiplica dois numeros\nOpcao: \n");
        scanf("%d", &opcao);

        switch(opcao)
        {
        case 1:
            printf("Informe um numero: \n");
            scanf("%d", &intnum);
            printf("Quadrado: %d\n", quadrado(intnum));
            break;

        case 2:
            printf("Informe um valor em centimetros para ser convertido em polegadas: \n");
            scanf("%f", &floatnum);
            printf("Polegadas: %.2f\n", calcPolegada(floatnum));
            break;

        case 3:
            do
            {
                printf("Informe um valor que deseja converter: \n");
                scanf("%f", &floatnum);
            }
            while(floatnum<0);

            do
            {
                printf("Informe o valor da cotacao: \n");
                scanf("%f", &cotacao);
            }
            while(cotacao<=0);

            do
            {
                printf("Informe o tipo de conversao (D - Dolar e R - Real): \n");
                fflush(stdin);
                scanf("%c", &tipo);
            }
            while(tipo!='d' && tipo!='D' && tipo!='r' && tipo!='R');

            printf("O valor obtido eh: %.2f\n", ConverterModeadas(floatnum, cotacao, tipo));

        case 4:
            printf("Informe um numero: \n");
            scanf("%d", &n1);

            printf("Informe outro numero: \n");
            scanf("%d", &n2);

            printf("%d * %d = %d\n", n1, n2, multiplicacao(n1, n2));

        }


        printf("(S ou s) para executar o programa novamente: \n");
        scanf(" %c", &conf);
    }
    while(conf=='s' || conf=='S');

    return 0;
}
