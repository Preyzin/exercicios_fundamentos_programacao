#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0, entre10e100=0, impar=0, div10=0, menor10maior100=0, trinta=0, diferente=0;



    do{

        printf("\nInforme um valor: ");
        scanf("%d", &num);

        if(num>=0){

            if(num<10 || num>100){
                menor10maior100++;
            }
            if(num%2!=0){
                impar++;
            }
            if(num%10==0){
                div10++;
            }
            if(num>10 && num<100){
                entre10e100++;
            }
            if(num==30){
                trinta++;
            }
            if(num!=10 || num!=20 || num!=30){
                diferente++;
            }
        }
    }while(num>=0);

    printf("\nMenor 10 Maior 100: %d", menor10maior100);
    printf("\nImpares: %d", impar);
    printf("\nDivisiveis por 10: %d", div10);
    printf("\nEntre 10 e 100: %d", entre10e100);
    printf("\nNumero de trintas: %d", trinta);
    printf("\nNumero de diferentes de 10, 20 e 30: %d", diferente);



    return 0;
}
