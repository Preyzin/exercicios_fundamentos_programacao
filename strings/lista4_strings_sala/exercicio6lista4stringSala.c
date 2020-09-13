#include <stdio.h>

int main(void)
{
    char string[150];
    int i=0;

    printf("Informe um texto com ate 150 caracteres: \n");
    fflush(stdin);
    gets(string);

    while(string[i] != '\0'){
        if(string[i] == ' '){
            printf("\n");
        }
        else{
            printf("%c", string[i]);
        }
        i++;
    }


    return 0;
}
