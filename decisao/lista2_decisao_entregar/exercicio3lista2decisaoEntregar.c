/*
3) A figura a seguir representa uma �rvore de decis�o para identificar se um paciente est�
saud�vel ou doente. Elabore um programa que implementa essa �rvore de decis�o.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char conf;
    float temp;
    printf("\nO paciente esta bem? <s ou n>");
    scanf("%c", &conf);
    fflush(stdin);

    if(conf=='s' || conf=='S'){
        printf("\nO paciente esta saudavel");
    }
    else if(conf=='n' || conf=='N'){
        printf("\nO paciente tem dor?");
        scanf("%c", &conf);
        fflush(stdin);
        if(conf=='s' || conf=='S'){
            printf("\nO paciente esta doente");
        }
        else if(conf=='n' || conf=='N'){
            printf("\nQual a temperatura do paciente: ");
            scanf("%f", &temp);
            if(temp>37){
                printf("\nO paciente esta doente");
            }
            else if(temp<=37){
                printf("\nO paciente esta saudavel");
            }
            else{
                printf("\nValor invalido");
            }
        }
    }
    else{
        printf("\nValor invalido");
    }


    return 0;
}
