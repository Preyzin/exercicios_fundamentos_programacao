/*
1) Elaborar um programa que leia um n�mero que representa uma senha e verifica
 se a mesma est� correta ou n�o, comparando-a com 12345 e informar "Acesso autorizado"
  ou "Acesso negado", conforme o caso.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha = 12345, controle;

    printf("\nSENHA: ");
    scanf("%d", &controle);

    if(controle == senha){
        printf("\nSENHA APROVADA");
    }
    else{
        printf("\nSENHA NEGADA");

    }



    return 0;
}
