/*
3) Ler caracteres. Contar quantas vogais minúsculas são informadas. O caractere zero '0'
indica o final da leitura, ou seja, finalizar a leitura quando informado esse caractere. O
programa deverá informar também quantos caracteres foram digitados ao todo.
*/

#include <stdio.h>

int main(void)
{
    int vm=0, cont=0;
    char c;

    do{
        printf("\nInforme um caractere: ");
        fflush(stdin);
        scanf("%c", &c);

        if(c!='0'){
            cont++;
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                vm++;
            }
        }

    }while(c!='0');

    printf("\nTotal de vogais minusculas: %d", vm);
    printf("\nTotal de caracteres digitados: %d", cont);





    return 0;
}
