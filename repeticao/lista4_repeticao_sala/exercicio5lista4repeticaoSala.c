#include <stdio.h>

int main()
{
    char c;
    int cont=0;

    do{
        printf("\nInforme um caractere: ");
        fflush(stdin);
        scanf("%c", &c);
        if(c!='0'){
            if(c=='A'){
                cont++;
            }
        }

    }while(c!='0');

    printf("\nO caractere A foi informado %d vezes", cont);


    return 0;
}
