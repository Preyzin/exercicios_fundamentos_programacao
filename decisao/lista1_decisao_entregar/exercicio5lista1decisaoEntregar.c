/*
5) Elaborar um programa que, dada a idade de um nadador, classifique-o em uma das
seguintes categorias:
Infantil A = 5 a 7 anos
Infantil B = 8 a 10 anos
Juvenil A = 11 a 13 anos
Juvenil B = 14 a 17 anos
Sênior = maiores de 17 anos
Não categorizado como atleta = menor de 5 anos
Mas se o valor informado é negativo, informar ao usuário que o valor é inválido para o
escopo da solução.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf("\nInforme a idade do nadador: ");
    scanf("%d", &idade);

    if(idade < 0){
        printf("\nA idade nao pode ser negativa");
    }
    else{
        if(idade < 5 && idade > 0){
            printf("\nNao categorizado como atleta, idade %d menor que 5 anos", idade);
        }
        if(idade >= 5 && idade <= 7){
            printf("\nidade %d categoria infatl A", idade);
        }
        if(idade >= 8 && idade <= 10){
            printf("\nidade %d categoria infatl B", idade);
        }
        if(idade >= 11 && idade <= 13){
            printf("\nidade %d categoria juvenil A", idade);
        }
        if(idade >= 14 && idade <= 17){
            printf("\nidade %d categoria juvenil B", idade);
        }
        if(idade > 17){
            printf("\nidade %d categoria senior", idade);
        }
    }


    return 0;
}
