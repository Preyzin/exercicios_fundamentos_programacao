/*
1) Ler um número e ler um dígito. Contar quantos dígitos o número possui. Exemplo:
É informado 5 como dígito:
55 – possui 2 dígitos cinco;
10 – possui nenhum dígito cinco;
1550 – possui dois dígitos cinco;
50050 – possui dois dígitos cinco.
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
