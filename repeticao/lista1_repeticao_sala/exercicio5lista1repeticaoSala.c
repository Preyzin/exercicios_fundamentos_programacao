#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, soma=0, produto=1, cont=0, somaTodos=0;
    float media;

    printf("\nInforme um numero maior que 2: ");
    scanf("%d", &n);

    for(i=2; i<=n; i++){
        somaTodos+=i;
        cont++;
        media=somaTodos/cont;
        if(i%2==0){
            printf("%d\t", i);
            soma+=i;
        }
        else{
            if(i%9==0){
                produto*=i;
            }
        }
    }
    printf("\nSoma: %d", soma);
    printf("\nProduto impares divisiveis por 9: %d", produto);
    printf("\nMedia intervalo: %.2f", media);




    return 0;
}
