#include <stdio.h>

void intervalo(void)
{
    int lim1, lim2, i, j;

    do
    {
        printf("Informe um limite inferior: \n");
        scanf("%d", &lim1);
    }
    while(lim1<0);
    do
    {
        printf("Informe um limite superior: \n");
        scanf("%d", &lim2);
    }
    while(lim2<lim1);

    for(i=lim1; i<=lim2; i++)
    {
        if(i*(i+1)*(i+2)<=lim2)
        {
            printf("%d ==>", i*(i+1)*(i+2));
            j=i;

            while(j==i)
            {
                printf(" %d * %d * %d = %d\n", j, j+1, j+2, i*(i+1)*(i+2));
                break;
            }
        }

    }


}

void verificaNumeroTrinagular(void)
{
    int num, i, cont=0;

    do{
        printf("Informe um numero: \n");
        scanf("%d", &num);
    }while(num<=0);

    for(i=1; i<=num; i++){
        if(i*(i+1)*(i+2)==num){
            printf("%d eh triangular ==> %d\n", num, i*(i+1)*(i+2));
            cont++;
        }
    }
    if(cont==0){
        printf("%d nao eh triangular\n", num);
    }

}

int main(void)
{
    int opcao;
    char conf;

    do
    {
        do
        {
            printf("1 - Verificar se o numero eh triagnular\n");
            printf("2 - Mostrar os numeros triangulares contidos em um intervalo\n");
            scanf("%d", &opcao);
        }
        while(opcao!=2 && opcao!=1);

        switch(opcao)
        {
        case 1:
            verificaNumeroTrinagular();
            break;
        case 2:
            intervalo();
            break;
        }



        printf("(S ou s) para executar o programa novamente: \n");
        scanf(" %c", &conf);
    }
    while(conf=='s' || conf=='S');



    return 0;
}
