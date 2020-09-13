/*
5) Elaborar uma função que recebe o número de linhas, o número de colunas, um determinado caractere e
desenha um quadrado ou retângulo na tela utilizando o caractere.
*/

#include <stdio.h>

void x(int linhas, int colunas, char c)
{
    int i, j, cont=0, cont1=0;

    for(i=1; i<=linhas; i++)
    {
        for(j=1; j<=colunas; j++)
        {

            printf("%c\t", c);
        }
        printf("\n");

    }


}

int main(void)
{
    int linhas, colunas;
    char conf, c;

    do
    {
        do
        {
            printf("Informe o numero de linhas: \n");
            scanf("%d", &linhas);
        }
        while(linhas<=0);
        do
        {
            printf("Informe o numero de colunas: \n");
            scanf("%d", &colunas);
        }
        while(colunas<=0);
        printf("Informe um caractere: ");
        scanf(" %c", &c);

        x(linhas, colunas, c);

        printf("\nDeseja executar o programa novamente(S ou N): \n");
        scanf(" %c", &conf);
    }
    while(conf=='S' || conf=='s');

    return 0;
}
