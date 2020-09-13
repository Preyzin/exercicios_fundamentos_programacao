/*
2) Faça um programa que receba um caractere via teclado, transforme esse caractere em
maiúsculo e verifique se ele pertence ou não ao alfabeto (A, B, ..., Z). Caso ele pertença,
o programa deve gerar a saída printf("O caracter digitado pertence ao
albafeto\n")e, com o uso da estrutura switch - case, verificar se o caractere é uma
vogal (neste caso, a saída deve ser printf("VOGAL %c\n", ch)) ou uma consoante
(neste caso, a saída deve ser printf("CONSOANTE %c\n", ch)). Caso o caractere
não pertença ao alfabeto, o programa deverá gerar a saída printf("O caracter
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
