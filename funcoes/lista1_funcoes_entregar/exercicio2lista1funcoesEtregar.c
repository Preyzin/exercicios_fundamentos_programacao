/*
2) Sabendo-se que 1cm = 0,393701 polegadas, fazer uma função que converte de centímetros para polegadas. Usar essa função para:
a) Mostrar o valor em polegadas de um determinado valor informado pelo usuário.
b) Imprimir uma tabela de conversão de centímetros para polegadas entre 1 a 20.
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
