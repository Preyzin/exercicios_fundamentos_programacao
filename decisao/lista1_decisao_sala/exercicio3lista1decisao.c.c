/*
3) Elaborar um programa que leia uma letra. Se informado �F� ou �f� mostrar a mensagem
�pessoa f�sica�, se informado �J� ou �j� mostrar a mensagem �pessoa jur�dica� ou "caractere
inv�lido" para qualquer outro caractere.
Exemplo:
char pessoa; //declarar uma vari�vel do tipo char
scanf(�%c�, &pessoa); //para ler um char
if (pessoa == �f� || pessoa == �F�) //para comparar se o conte�do
armazenado na vari�vel � um determinado caractere.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char pessoa;

    printf("\nPressione f para pessoa fisica ou j para pessoa juridica: ");
    scanf("%c", &pessoa);
    fflush(stdin);
    if(pessoa=='f' || pessoa=='F'){
        printf("\nPessoa Fisica!!!");
    }
    else if(pessoa=='j' || pessoa=='J'){
        printf("\nPessoa Juridica");
    }
    else{
        printf("\nCaracter invalido");
    }


    return 0;
}
