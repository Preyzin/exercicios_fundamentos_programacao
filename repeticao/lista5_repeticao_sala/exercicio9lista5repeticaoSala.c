#include <stdio.h>

int main()
{
    int qtd, i, cont=0;

    printf("\nQuantos numeros impares e multiplos de 5 quer mostrar: ");
    scanf("%d", &qtd);

    if(qtd<0){
        qtd=qtd*-1;
    }

    for(i=0; cont<qtd; i++){
        if(i%5==0 && i%2!=0){
            printf("\n%d", i);
            cont+=1;
        }
    }

    return 0;
}
