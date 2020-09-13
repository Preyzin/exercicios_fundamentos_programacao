#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, lim1, lim2, incremento, aux, cont=0, soma=0;
    float media;

    printf("\nInforme o valor inicial para o intervalo: ");
    scanf("%d", &lim1);
    printf("\nInforme o valor final do intervalo: ");
    scanf("%d", &lim2);
    printf("\nInforme o incremento: ");
    scanf("%d", &incremento);

    if(lim1>lim2){
        aux=lim1;
        lim1=lim2;
        lim2=aux;
    }
    for(i=lim1; i<=lim2; i+=incremento){
        printf("\n%d", i);
        if(i%2!=0 && i%35==0){
            cont++;
            soma+=i;
            media=soma/cont;
            printf("\t Impar e divisivel por 35");
        }
    }
    printf("\nA media dos numeros impares que sao divisiveis por 35 eh: %.2f", media);



    return 0;
}
