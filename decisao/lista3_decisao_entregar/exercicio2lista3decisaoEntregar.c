/*
2) Fa�a um programa que receba um caractere via teclado, transforme esse caractere em
mai�sculo e verifique se ele pertence ou n�o ao alfabeto (A, B, ..., Z). Caso ele perten�a,
o programa deve gerar a sa�da printf("O caracter digitado pertence ao
albafeto\n")e, com o uso da estrutura switch - case, verificar se o caractere � uma
vogal (neste caso, a sa�da deve ser printf("VOGAL %c\n", ch)) ou uma consoante
(neste caso, a sa�da deve ser printf("CONSOANTE %c\n", ch)). Caso o caractere
n�o perten�a ao alfabeto, o programa dever� gerar a sa�da printf("O caracter
digitado nao pertence ao alfabeto\n").
*/

#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;

    printf("Digite um caracter: ");
    scanf("%c", &ch);

    if(ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122){
        printf("\nO caractere digitado pertence ao alfabeto");

        ch = toupper(ch);
        printf("\nMaiusculo: %c", ch);

        switch(ch){
        case 'A':
            printf("\nVOGAL");
            break;

            case 'E':
            printf("\nVOGAL");
            break;

            case 'I':
            printf("\nVOGAL");
            break;

            case 'O':
            printf("\nVOGAL");
            break;

            case 'U':
            printf("\nVOGAL");
            break;


        default:
            printf("\nCONSOANTE");

        }
    }
    else{
        printf("\nO caractere digitado nao pertence ao alfabeto");
    }
    return 0;
}
