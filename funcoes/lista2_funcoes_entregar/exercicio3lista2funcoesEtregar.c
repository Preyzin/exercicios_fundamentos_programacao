/*
3) Fazer uma fun��o que verifica se um n�mero � um quadrado perfeito. Um n�mero � quadrado perfeito se
possui como raiz quadrada um valor inteiro. A fun��o para obter a raiz quadrada � sqrt() e est� na biblioteca
<math.h>. Por exemplo, 25 � um quadrado perfeito porque raiz quadrada de 25 � 5.
Use essa fun��o para:
a) Verificar se um n�mero, informado pelo usu�rio, � um quadrado perfeito.
b) Mostrar quais n�meros de um intervalo s�o quadrados perfeitos.
Use menu de op��es (com switch-case) e implemente a repeti��o de programa.
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
