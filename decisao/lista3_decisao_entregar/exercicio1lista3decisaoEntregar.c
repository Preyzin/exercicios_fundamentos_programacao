/*
1) Elabore um programa que obtenha por meio do teclado a pontuação, em valores
inteiros, de um candidato ao concurso vestibular, nas seguintes área: exatas (e), humanas
(h) e conhecimento geral (cg). A seguir deverá ser definida a média ponderada usando a
seguinte expressão: mp = ((e * 3) + (h * 2) + cg) / 6. A média ponderada calculada define
o rendimento do candidato de acordo com a seguinte tabela:
Insuficiente = 0 - 250 pontos
Baixo = 251 - 500 pontos
Regular = 501 - 700 pontos
Bom = 701 - 900 pontos
Excelente = maior que 900 pontos
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int e, h, cg;
    float mp;

    printf("\nInforme a nota em exatas: ");
    scanf("%d", &e);
    printf("\nInforme a nota de humanas: ");
    scanf("%d", &h);
    printf("\nInforme a nota em conhecimentos gerais: ");
    scanf("%d", &cg);

    mp = ((e * 3) + (h * 2) + cg) / 6;

    if(mp <= 250){
        printf("\nMedia %.2f insuficiente", mp);
    }
    else if(mp>=251 && mp <= 500){
        printf("\nMedia %.2f baixa", mp);
    }
    else if(mp>=501 && mp <= 700){
        printf("\nMedia %.2f regular", mp);
    }
    else if(mp>=701 && mp <= 900){
        printf("\nMedia %.2f bom", mp);
    }
    else if(mp>=901){
        printf("\nMedia %.2f exelente", mp);
    }
    else{
        printf("\nValor invalido");
    }

    return 0;
}
