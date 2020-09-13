/*
2) Sabendo-se que 1cm = 0,393701 polegadas, fazer uma fun��o que converte de cent�metros para polegadas. Usar essa fun��o para:
a) Mostrar o valor em polegadas de um determinado valor informado pelo usu�rio.
b) Imprimir uma tabela de convers�o de cent�metros para polegadas entre 1 a 20.
*/

#include <stdio.h>

float calcPolegada(float centimetro){
    float polegada;

    polegada=centimetro*0.393701;

    return polegada;
}


int main()
{
    int i;
    float centimetro;
    char conf;

    do{
        do{
            printf("Informe uma medida em centimetros: \n");
            scanf("%f", &centimetro);
        }while(centimetro<0);

        printf("O equivalente em polegadas eh: %.2f\n", calcPolegada(centimetro));

        printf("=== TABELA DE CONVERSAO ===\n");
        printf("CENTIMETRO\tPOLEGADAS\n");
        for(i=1; i<=20; i++){
            printf("%d\t\t%.2f\n", i, calcPolegada(i));
        }

        printf("(S ou s) Para executar o programa novamente: \n");
        scanf(" %c", &conf);
    }while(conf=='s' || conf=='S');


    return 0;
}
