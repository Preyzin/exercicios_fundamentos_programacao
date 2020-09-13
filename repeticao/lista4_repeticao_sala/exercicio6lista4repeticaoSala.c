#include <stdio.h>

int main()
{
    int contMaiusculo=0, contMinusculo=0, contnLetras=0;
    char c;

    do{
        printf("\nInforme um caractere: ");
        fflush(stdin);
        scanf("%c", &c);

        if(c!='0'){
            if(c>=65 && c<=90){
                contMaiusculo++;
            }
            else if(c>=97 && c<=122){
                contMinusculo++;
            }
            else{
                contnLetras++;
            }
        }


    }while(c!='0');

    printf("\nMaiusculas: %d", contMaiusculo);
    printf("\nMinusculas: %d", contMinusculo);
    printf("\nNao letras: %d", contnLetras);


    return 0;
}
