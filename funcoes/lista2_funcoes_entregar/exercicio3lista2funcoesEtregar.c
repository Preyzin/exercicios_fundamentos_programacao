/*
3) Fazer uma função que verifica se um número é um quadrado perfeito. Um número é quadrado perfeito se
possui como raiz quadrada um valor inteiro. A função para obter a raiz quadrada é sqrt() e está na biblioteca
<math.h>. Por exemplo, 25 é um quadrado perfeito porque raiz quadrada de 25 é 5.
Use essa função para:
a) Verificar se um número, informado pelo usuário, é um quadrado perfeito.
b) Mostrar quais números de um intervalo são quadrados perfeitos.
Use menu de opções (com switch-case) e implemente a repetição de programa.
*/

#include <stdio.h>
#include <math.h>

int verificaQuadradoPerfeito(int num)
{

    int resultado, i;

    for(i=1; i<=num; i++){
        if(i*i==num){
            resultado=1;
            break;
        }
        else{
            resultado=0;
        }
    }

    return resultado;
}

int main(void)
{
    int num, opcao, lim1, lim2, i;
    char conf;

    do
    {
        do
        {
            printf("1 - Verifica se o numero eh um quadrado perfeito\n2 - Mostra os numeros quadrados perfeitos em um intervalo\nOpcao: ");
            scanf("%d", &opcao);
        }
        while(opcao!=1 && opcao!=2);

        switch(opcao)
        {
        case 1:
            do{
                printf("Informe um numero: \n");
                scanf("%d", &num);
            }while(num<0);

            if(verificaQuadradoPerfeito(num)==1){

                printf("%d eh um quadrado perfeito ==> raiz quadrada de %d eh %d\n", num, num, (int)sqrt(num));
            }
            else{
                printf("%d nao eh um quadrado perfeito\n", num);
            }

        case 2:
            do{
                printf("Informe um limite inferior: \n");
                scanf("%d", &lim1);
            }while(lim1<0);
            do{
                printf("Informe um limite superior: \n");
                scanf("%d", &lim2);
            }while(lim2<=lim1);

            for(i=lim1; i<=lim2; i++){
                if(verificaQuadradoPerfeito(i)==1){
                    printf("%d eh um quadrado perfeito ==> raiz quadrada de %d eh %d\n", i, i, (int)sqrt(i));
                }
            }

        }


        printf("Deseja executar o programa novamente(S ou N): \n");
        scanf(" %c", &conf);
    }
    while(conf=='s' || conf=='S');


    return 0;
}
