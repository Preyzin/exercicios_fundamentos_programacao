/*
1) Ler um n�mero e ler um d�gito. Contar quantos d�gitos o n�mero possui. Exemplo:
� informado 5 como d�gito:
55 � possui 2 d�gitos cinco;
10 � possui nenhum d�gito cinco;
1550 � possui dois d�gitos cinco;
50050 � possui dois d�gitos cinco.
Repetir o programa enquanto informados valores positivos.
*/

#include <stdio.h>

int main()
{
    int num, dig, cont;
    char conf;

    do
    {
        cont=0;

        do
        {
            printf("\nInforme um numero: ");
            scanf("%d",&num);
            if(num<1)
            {
                printf("\nNumero invalido, o numero deve ser positivo");
            }

        }while(num<1);

        do
        {
            printf("\nInforme um digito: ");
            scanf("%d",&dig);
            if(dig<0)
            {
                printf("\nDigito invalido, o digito deve ser positivo");
            }

        }while(dig<0);

        while(num>0){
            if(num%10==dig){
                cont++;
            }
            num=num/10;

        }
        printf("\nO numero tem %d iguais a %d", cont, dig);

        printf("\nDeseja continuar executando o programa (S , N)");
        fflush(stdin);
        scanf("%c", &conf);
    }
    while(conf=='s' || conf=='S');

    return 0;
}
