#include <stdio.h>

int main(void)
{
    int vetVogais[5]={0,0,0,0,0};
    char vetString[150];

    printf("Informe um texto com até 150 caracteres: ");
    fflush(stdin);
    gets(vetString);

    int i = 0;
    while(vetString[i] != '\0'){
        if(vetString[i] == 'A' || vetString[i] == 'a'){
            vetVogais[0]++;
        }
        if(vetString[i] == 'E' || vetString[i] == 'e'){
            vetVogais[1]++;
        }
        if(vetString[i] == 'I' || vetString[i] == 'i'){
            vetVogais[2]++;
        }
        if(vetString[i] == 'O' || vetString[i] == 'o'){
            vetVogais[3]++;
        }
        if(vetString[i] == 'U' || vetString[i] == 'u'){
            vetVogais[4]++;
        }
        i++;
    }
    printf("VOGAL\tQUANTIDADE\n==================\n");
    printf("A/a\t%d\n", vetVogais[0]);
    printf("E/e\t%d\n", vetVogais[1]);
    printf("I/i\t%d\n", vetVogais[2]);
    printf("O/o\t%d\n", vetVogais[3]);
    printf("U/u\t%d\n", vetVogais[4]);
    return 0;
}
