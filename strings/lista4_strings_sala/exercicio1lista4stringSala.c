#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char texto[100];
    int i=0, contO=0;

    printf("Informe um texto com ate 100 caracteres: \n");
    fflush(stdin);
    gets(texto);

    if(texto[0]=='a'){
        printf("%s\n", texto);
    }
    else{
        while(texto[i] != '\0'){
            if(texto[i]=='o'){
                contO++;
            }
            i++;
        }
        printf("O texto ''%s'' tem %d caracteres 'o'", texto, contO);
    }

    return 0;
}
