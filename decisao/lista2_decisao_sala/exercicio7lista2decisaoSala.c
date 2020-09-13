/*
7) Ler um n�mero e utilizando uma estrutura if else if else if... (obrigatoriamente
encadeada) informar se ele �:
a) Divis�vel por 5, por 3 ou por 2;
Exemplo: 30 � divis�vel por 2, 3 e 5.
b) Se ele � divis�vel somente por 5 e por 3; por 5 e por 2; ou por 3 e por 2;
Exemplo: 15 � divis�vel somente por 3 e por 5.
Exemplo: 10 � divis�vel somente por 5 e por 2.
Exemplo: 6 � divis�vel somente por 3 e por 2.
c) Divis�vel somente por 5, por 3 ou por 2;
Exemplo: 25 divis�vel somente por 5
d) N�o � divis�vel por nenhum destes;
Exemplo: 7 n�o � divis�vel por 5, 3 ou 2;
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("\nInforme um numero: ");
    scanf("%d", &num);

    if(num%5==0){
        printf("\nO numero %d eh divisivel por 5", num);
    }
    else if(num%3==0){
        printf("\nO numero %d eh divisivel por 3", num);
    }
    else if(num%2==0){
        printf("\nO numero %d eh divisivel por 2", num);
    }
    else{
        printf("\nO numero nao eh divisivel nem por 5, 3 ou 2");
    }

    if(num%5==0){
        if(num%3==0){
            printf("\nO numero eh divisivel somente por 5 e por 3");
        }
        else if(num%2==0){
            printf("\nO numero eh divisivel somente por 5 e por 2");
        }
    }
    else if(num%3==0){
        if(num%2==0){
            printf("\nO numero eh divisivel somente por 3 e por 2");
        }
    }
    else{
        printf("\nO numero nao eh divisivel por nada");
    }


    return 0;
}
