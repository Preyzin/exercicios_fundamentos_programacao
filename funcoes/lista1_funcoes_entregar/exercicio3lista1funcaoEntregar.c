/*
3) Fazer uma função que converte de reais para dólares ou de dólares para reais. Essa função recebe como
parâmetros: o valor a ser convertido, o valor da cotação, é se é para converter em dólares ou em reais. A
função faz a conversão e retorna o valor convertido.
Sugestão de cabeçalho da função:
float ConverterModeadas(float Valor, float Cotacao, char Tipo) /*Tipo 'D' ou 'd' significa que a conversão é de real para dólar e 'R' ou
'r' significa que a conversão é de dólar para real.
Usando essa função:
a) Ler um determinado valor, o valor da cotação e o tipo de conversão e apresentar o valor obtido.
b) Ler os valores que representam os limites de um intervalo, o valor da cotação e o tipo de conversão e
apresentar a tabela de conversão resultante.
*/

#include <stdio.h>

float ConverterModeadas(float valor, float cotacao, char tipo)
{
    float valorConvertido;

    if(tipo=='d' || tipo=='D')
    {
        valorConvertido=valor/cotacao;
        return valorConvertido;
    }
    if(tipo=='r' || tipo=='R')
    {
        valorConvertido=valor*cotacao;
        return valorConvertido;
    }

}

int main(void)
{
    int lim1, lim2, i;
    float valor, cotacao;
    char conf, tipo;
    do
    {
        do
        {
            printf("Informe um valor que deseja converter: \n");
            scanf("%f", &valor);
        }
        while(valor<0);

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

        printf("O valor obtido eh: %.2f\n", ConverterModeadas(valor, cotacao, tipo));

        do
        {
            printf("Informe o valor para o limite inferior: \n");
            scanf("%d", &lim1);
        }
        while(lim1<=0);

        do
        {
            printf("Informe o valor para o limite superior: \n");
            scanf("%d", &lim2);
        }
        while(lim2<=lim1);


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

        printf("\nDOLAR REAIS\n");

        for(i=lim1; i<=lim2; i++)
        {
            printf("%d\t%.2f\n", i, ConverterModeadas(i, cotacao, tipo));

        }

        printf("(S ou s) para executar o programa novamente: \n");
        scanf(" %c", &conf);
    }
    while(conf=='s' || conf=='S');


    return 0;
}
