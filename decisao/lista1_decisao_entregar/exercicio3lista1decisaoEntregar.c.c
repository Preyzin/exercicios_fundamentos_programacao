/*
3) Faça um programa que leia o gênero, e caso o mesmo seja 'f', 'F', 'm' ou 'M' leia
também a idade e o tempo de trabalho de uma pessoa e determine se ela pode ou não se
aposentar. Assuma que homens se aposentam com 45 anos de trabalho ou idade
superior a 70 anos e mulheres se aposentam com 40 anos de trabalho ou idade superior
a 65 anos.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char genero;
    int idade, tempoServico;


    printf("\nDigite F para feminino ou M para masculino: ");
    scanf("%c", &genero);
    fflush(stdin);
    printf("\nInforme a idade: ");
    scanf("%d", &idade);
    printf("\nInforme o tempo de servico: ");
    scanf("%d", &tempoServico);

    if(genero == 'm' || genero == 'M'){
        if(tempoServico>=45 || idade > 70){
            printf("\nAposentado com sucesso");
        }
        else{
            printf("\nNao preenche os requisitos para se aposentar");
        }

    }
    else if (genero == 'f' || genero == 'F'){
        if(tempoServico>=40 || idade > 65){
            printf("\nAposentada com sucesso");
        }
        else{
            printf("\nNao preenche os requisitos para se aposentar");
        }
    }
    else{
        printf("\nCaracter invalido");
    }

    return 0;
}
