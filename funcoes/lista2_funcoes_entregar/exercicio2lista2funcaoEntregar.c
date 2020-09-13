/*
2) Fazer uma função que verifica se um número é retangular. Um número é retangular se ele pode ser obtido
a partir da soma de uma sequência de números pares, iniciando em 2. Por exemplo: 30 é retangular porque
resulta da soma de 2 + 4 + 6 + 8 + 10.
Use essa função para:
a) Verificar se um número, informado pelo usuário, é retangular.
b) Mostrar quais números de um intervalo são retangulares.
Use menu de opções (com switch-case) e implemente a repetição de programa.
*/

#include<stdio.h>
int retangular(int num)
{
    int j, i, soma=0, aux, resultado=0;

    for(i=2; i<=num; i+=2)
    {
        soma+=i;
        if(soma==num)
        {
            printf("%d eh retangular ==> ",soma);
            aux=i;
            resultado=1;
            break;
        }

    }
    if(resultado==1)
    {
        for(j=2; j<=aux; j+=2)
        {
            if(j<aux)
            {
                printf(" %d +",j);
            }
            else
            {
                printf(" %d = ",j);
            }
        }
        printf("%d\n",num);
    }
    return resultado;
}

int main()
{

    int num, opcao, lim1, lim2, i;
    char conf;

    do
    {
        printf("1 - Verifica se um numero e retangular\n");
        printf("2 - Mostra os numeros retangulares em um intervalo\n");
        printf("Opcao: \n");
        scanf("%d", &opcao);

        switch(opcao)
        {
        case 1:
            printf("Informe um numero: \n");
            scanf("%d", &num);

            if(retangular(num)==0)
            {
                printf("O numero nao eh retangular\n");
            }

            break;
        case 2:
            do{
                printf("Informe um limite inferior: \n");
                scanf("%d", &lim1);
            }while(lim1<0);
            do{
                printf("Informe um limite superior: \n");
                scanf("%d", &lim2);
            }while(lim2<=lim1);

            for(i=lim1; i<=lim2; i++)
            {
                printf("", retangular(i));
            }
            break;
        default:
            printf("\nInforme uma opcao valida\n");

        }
        printf("\nDeseja repetir o programa(S ou N)\n");
        scanf(" %c",&conf);
    }
    while(conf=='s' || conf=='S');
}
