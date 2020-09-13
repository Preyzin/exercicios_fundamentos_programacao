/*
1) Ler dois números float e apresentar, sem utilizar funções matemáticas prontas:
a) A divisão do primeiro número pelo segundo, armazenando somente a parte inteira do
número.
b) A soma dos dois números com o resultado arredondado para o próximo número inteiro.
Obs.: As variáveis de resultados devem ser do tipo int.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    float n1, n2;
    int soma, divisao;

    printf("\nInsira um valor float: ");
    scanf("%f", &n1);
    printf("\nInsira outro valor float: ");
    scanf("%f", &n2);

    divisao=n1/n2;

    printf("\n%f / %f = %d", n1, n2, divisao);

    if(n1 - (int)n2 == 0 && n2 - (int)n2 == 0){
            soma=n1+n2;

            printf("\n%f + %f = %d", n1, n2, soma);
    }else{
        soma=n1+n2+1;

        printf("\n%f + %f = %d", n1, n2, soma);

    }

}
