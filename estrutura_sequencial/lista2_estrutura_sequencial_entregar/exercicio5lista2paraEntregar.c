/*
5) Um hotel deseja fazer uma promo��o especial de final de semana, concedendo um
desconto de 25% na di�ria. Sendo informados o n�mero de apartamentos do hotel e o
valor da di�ria por apartamento para o final de semana completo. Elaborar um programa
para calcular:
a) Valor promocional da di�ria;
b) Valor total caso a ocupa��o no final de semana atinja 100%;
c) Valor total a ser arrecadado caso a ocupa��o no final de semana atinja 70%;
d) Valor que o hotel deixar� de arrecadar em virtude da promo��o, caso a ocupa��o atinja
100%.
Armazene em vari�veis apenas o valor da di�ria, o valor da di�ria com desconto e a
quantidade de quartos.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vDiaria, qtdAp, vDiariaPromo;

    printf("\nInforme o valor da diaria: ");
    scanf("%f", &vDiaria);
    printf("\nInforme a quantidade de apartamentos: ");
    scanf("%f", &qtdAp);

    vDiariaPromo=vDiaria-(0.25*vDiaria);
    printf("\nO valor da diaria promocional: R$ %.2f", vDiariaPromo);

    printf("\nO total arrecadado com 100%% de ocupacao: R$ %.2f", 2*(vDiariaPromo*qtdAp));

    printf("\nO total arrecadado com 70%% de cupacao: R$ %.2f", 2*(vDiariaPromo*(qtdAp*0.7)));

    printf("\nO valor que deixara de arrecadar ao aplicar o desconto: R$ %.2f", (2*(vDiaria*qtdAp))-(2*(vDiariaPromo*qtdAp)));

    return 0;
}
