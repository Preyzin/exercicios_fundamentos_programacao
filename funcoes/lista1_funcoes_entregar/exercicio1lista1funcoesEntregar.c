/*
1) Fazer uma função para calcular o quadrado de um número. Usar essa função para:
a) Mostrar o quadrado de um número informado pelo usuário.
b) Apresentar o quadrado entre dois valores (limites de um intervalo) informado pelo usuário. Os valores para os limites devem estar 1 e 100:
*/

#include <stdio.h>

int quadrado(int num){
    int quadrado;

    quadrado = num*num;

    return quadrado;
}

int main(void)
{
    int num, lim1, lim2, i;
    char conf;

    do{
        do{
            printf("Informe um numero: \n");
            scanf("%d", &num);
        }while(num<0);

        printf("O quadrado do numero eh: %d\n", quadrado(num));

        printf("Informe o valor para o limite inferior de um intervalo: ");
        scanf("%d", &lim1);

        do{
            printf("Informe o valor para o limite superior de um intervalo: ");
            scanf("%d", &lim2);
        }while(lim2<=lim1);

        for(i=lim1;i<=lim2;i++){
            printf("%d ^ 2 = %d\n", i, quadrado(i));
        }


        printf("(S ou s) para executar novamente: ");
        scanf(" %c", &conf);
    }while(conf=='s' || conf=='S');

    return 0;
}
