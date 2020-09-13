/*
4) Fazer uma função que apresenta o resultado da multiplicação de dois números. Usar essa função para:
a) Apresentar a multiplicação de dois números informados pelo usuário.
b) Apresentar a tabuada (0 a 10) de um número informado pelo usuário.
*/

#include <stdio.h>

int multiplicacao(int n1, int n2)
{
    int result;

    result=n1*n2;

    return result;
}

int main(void)
{
    int n1, n2, i;
    char conf;

    do
    {
        printf("Informe um numero: \n");
        scanf("%d", &n1);

        printf("Informe outro numero: \n");
        scanf("%d", &n2);

        printf("%d * %d = %d\n", n1, n2, multiplicacao(n1, n2));

        printf("Informe um numero: \n");
        scanf("%d", &n1);

        for(i=0; i<=10; i++)
        {
            printf("%d * %d = %d\n", n1, i, multiplicacao(n1, i));
        }

        printf("(S ou s) para executar o programa novamente: \n");
        scanf(" %c", &conf);
    }
    while(conf=='s' || conf=='S');
    return 0;
}
