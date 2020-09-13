/*
8) Fa�a um programa que leia tr�s notas de um aluno e calcule a m�dia ponderada, com
os pesos 1, 3 e 4, respectivamente, e:
a) Se a m�dia obtida est� entre 6 a 10 informar que o aluno est� aprovado;
b) Se a m�dia obtida est� entre 4 e 5,9 informar que o aluno est� em recupera��o. Nesse
caso, ler a nota de recupera��o e calcular a m�dia final (que � a m�dia entre a m�dia
anual e a nota de recupera��o);
b.1) Se a m�dia final � menor que 5 informar que o aluno est� reprovado ap�s
recupera��o;
b.2) Se � igual ou maior que 5 informar que o aluno est� aprovado ap�s recupera��o;
c) Se a m�dia obtida � menor que 4 informar que o aluno est� reprovado antes da
recupera��o.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, media, recuperacao;

    printf("\nInforme a nota da primeira prova: ");
    scanf("%f", &n1);
    printf("\nInforme a nota da segunda prova: ");
    scanf("%f", &n2);
    printf("\nInforme a nota da terceira prova: ");
    scanf("%f", &n3);

    media = (n1 + 3*n2 + 4*n3)/8;

    if(media >= 6 && media<=10){
        printf("\nO aluno esta aprovado com media: %f", media);
    }
    else if(media >=4 && media<=5.9){
        printf("\nO aluno esta de recuperacao com media: %f", media);
        printf("\nInforme a nota de recuperacao do aluno: ");
        scanf("%f", &recuperacao);

        if(((media+recuperacao)/2) < 5){
            printf("\nO aluno esta reprovado apos recuperacao com media: %f", (media+recuperacao)/2);
        }
        else if(((media+recuperacao)/2) >= 5){
            printf("\nO aluno esta aprovado apos recuperacao com media: %f", (media+recuperacao)/2);
        }
    }
    else{
        printf("\nO aluno esta reprovado antes da recuperacao com media: %f", media);
    }


    return 0;
}
