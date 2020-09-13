#include <stdio.h>

int main()
{
    int meses=0;
    float valor;

    valor=1000;

    while(valor<=1200){
    valor+=valor*0.05;
    meses++;
    }

    printf("\nValor final: R$%.2f", valor);
    printf("\nSao necessarios %d meses para que  capital investido ultrapasse R$ 1.200,00", meses);


    return 0;
}
