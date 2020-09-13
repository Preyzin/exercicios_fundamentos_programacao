#include <stdio.h>

int main(void)
{
    int i=0, tamanho=0;
    char string[150], palavra[tamanho];

    printf("Informe um texto com ate 150 caracteres: \n");
    fflush(stdin);
    gets(string);

    while(string[i] != '\0'){

        if(string[i] == ' '){
            break;
        }
        palavra[i]=string[i];
        tamanho++;
        palavra[tamanho];
        i++;
    }

    printf("\n%s", palavra);

    return 0;
}
