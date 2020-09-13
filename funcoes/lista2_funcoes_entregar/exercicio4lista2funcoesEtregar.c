/*
4) Elaborar uma fun��o que verifica se um n�mero � pal�ndromo. Um n�mero � pal�ndromo quando ele n�o
muda se lido da esquerda para a direita ou da direita para a esquerda. Por exemplo, 2112 � pal�ndromo.
Elaborar uma fun��o que verifica se um n�mero, que contenha entre 2 e 9 d�gitos, � pal�ndromo.
Utilizando essa fun��o:
a) Verificar se um n�mero informado pelo usu�rio � pal�ndromo.
b) Apresentar os n�meros pal�ndromos que pertencem a um intervalo informado pelo usu�rio.
Use menu de op��es (com switch-case) e implemente a repeti��o de programa.
*/


#include <stdio.h>

int verificaPalindromo(int num)
{
    int aux=num, invertido=0;

    while (aux > 0)
    {
        invertido = (invertido*10) + (aux % 10);
        aux = aux / 10;
    }

    if(invertido==num){
        return 1;
    }
    else{
        return 0;
    }


}


int main(void)
{
    int num, opcao, lim1, lim2, i;
    char conf;

    do
    {
        do
        {
            printf("1 - Verifica se um numero eh palindromo\n2 - Mostra os palindromos que pertencem a um intervalo\nOpcao: \n");
            scanf("%d", &opcao);
        }
        while(opcao!=1 && opcao!=2);

        switch(opcao)
        {
        case 1:
            do
            {
                printf("Informe um numero: \n");
                scanf("%d", &num);
            }
            while(num<=0);

            if(verificaPalindromo(num)==1){
                printf("Eh palindromo\n");
            }
            else{
                printf("Nao eh palindromo\n");
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
                if(verificaPalindromo(i)==1){
                    printf("%d\t", i);
                }
            }

        }

        printf("\nDeseja executar o programa novamente(S ou N): \n");
        scanf(" %c", &conf);
    }
    while(conf=='s' || conf=='S');

    return 0;
}
