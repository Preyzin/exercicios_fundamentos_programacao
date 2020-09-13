/*
3) Em um intervalo de 0 a 100, apresentar:
a) Os números divisíveis por 3.
b) O quadrado dos números divisíveis por 3.
c) Os números divisíveis por 5 ou por 7.
d) A raiz quadrada dos números divisíveis por 5 ou por 7.
Apresentar cada item em listagem separada. Colocar um cabeçalho antes de cada
listagem de maneira a identificar o conteúdo da mesma. Em cada listagem separar os
números por uma tabulação. A raiz quadrada pode ser obtida pela função sqrt() que está
na biblioteca math.h
*/


#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    float raiz;

    for(num=0; num<=100; num++){
        if(num%3==0){
            printf("\nNumero divisivel por 3: %d", num);

        }
    }

    for(num=0; num<=100; num++){
        if(num%3==0){

            printf("\nQuadrado do numero divisivel por 3: %d", num*num);
        }
    }
    for(num=0; num<=100; num++){
            if(num%5==0 || num%7==0){
                printf("\nNumero divisivel por 5 ou por 7: %d", num);
            }
    }
    for(num=0; num<=100; num++){
            if(num%5==0 || num%7==0){

                raiz=sqrt(num);
                printf("\nRaiz do div por 5 ou 7: %.2f", raiz);
        }
    }


    return 0;
}
