/*
8) Faça um programa que leia três notas de um aluno e calcule a média ponderada, com
os pesos 1, 3 e 4, respectivamente, e:
a) Se a média obtida está entre 6 a 10 informar que o aluno está aprovado;
b) Se a média obtida está entre 4 e 5,9 informar que o aluno está em recuperação. Nesse
caso, ler a nota de recuperação e calcular a média final (que é a média entre a média
anual e a nota de recuperação);
b.1) Se a média final é menor que 5 informar que o aluno está reprovado após
recuperação;
b.2) Se é igual ou maior que 5 informar que o aluno está aprovado após recuperação;
c) Se a média obtida é menor que 4 informar que o aluno está reprovado antes da
recuperação.
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
