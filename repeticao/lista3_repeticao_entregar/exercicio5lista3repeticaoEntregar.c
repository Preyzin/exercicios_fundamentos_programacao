/*
5) Apresentar os números primos entre dois valores, que representam os limites inferior e
superior, respectivamente, de um intervalo, informados pelo usuário. Apresentá-los com n
números por linha. n é informado pelo usuário. Validar n para que seja maior que 0.
Validar o limite inferior para seja maior que 1 e o limite superior para que seja maior ou
igual ao limite inferior. Implementar a repetição de programa.
*/

#include <stdio.h>

int main(void)
{
    int lim1, lim2, n, cont, i, j;
    char conf;


    do{

        do{
            printf("Informe o valor do limite inferior do intervalo: \n");
            scanf("%d", &lim1);
            if(lim1<=1){
                printf("\nO limite inferior tem que ser maior do que 1\n");
            }
        }while(lim1<=1);

        do{
            printf("Informe o valor do limite superior do intervalo: \n");
            scanf("%d", &lim2);
            if(lim2<lim1){
                printf("\nO limite superior tem que ser maior ou igual ao limite inferior\n");
            }

        }while(lim2<lim1);


        for(i=lim1;i<=lim2; i++){
            cont=0;
            for(j=1; j<=i; j++){
                if(i%j==0){
                    cont++;
                }
            }
            if(cont==2){
                printf("\t%d", i);
            }
        }

    }while(conf=='s' || conf=='S');


    return 0;
}
