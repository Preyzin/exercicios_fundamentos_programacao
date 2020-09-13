/*
3) Elaborar um programa que leia uma letra. Se informado ‘F’ ou ‘f’ mostrar a mensagem
“pessoa física”, se informado ‘J’ ou ‘j’ mostrar a mensagem “pessoa jurídica” ou "caractere
inválido" para qualquer outro caractere.
Exemplo:
char pessoa; //declarar uma variável do tipo char
scanf(“%c”, &pessoa); //para ler um char
if (pessoa == ‘f’ || pessoa == ‘F’) //para comparar se o conteúdo
armazenado na variável é um determinado caractere.
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
