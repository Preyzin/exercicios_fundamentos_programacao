/*
5) Ler números inteiros. Prosseguir a leitura até ser informado o valor zero que não deve
ser considerados nos cálculos. Informar:
a) Quantos valores positivos foram informados.
b) Quantos valores negativos e pares foram informados. Exemplo: Se a entrada for -1, -2,
-3, deverá retornar 1, pois tem apenas um número negativo que é par.
c) A média dos valores divisíveis por 3 informados. Usar a funcão abs() para converter os
valores negativos em positivos. Validar para não fazer divisão por zero no cálculo da
média.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int num, contposi=0, contneg=0, cont=0, sum=0;
    float media;

    do{
        printf("\nInforme um numero: ");
        scanf("%d", &num);

        if(num!=0){
            if(num>0){
                contposi++;
            }
            if(num<0 && num%2==0){
                contneg++;
            }
            if(num%3==0){
                num = abs(num);
                cont++;
                sum+=num;
            }
        }

    }while(num!=0);

    if(cont>0){
        media=(float)sum/cont;
    }

    printf("\nNumeros positivos: %d", contposi);
    printf("\nNumeros negativos que sao pares: %d", contneg);
    printf("\nMedia dos numeros divisiveis por 3: %.2f", media);

    return 0;
}
