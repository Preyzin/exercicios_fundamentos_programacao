#include <stdio.h>


int main(void)
{
    int num[10], i, cont=0;
    float percent;

    for(i=0; i<=9; i++){
        do{
            printf("Informe o elementro que esta na posicao %d do vetor: \n", i);
            scanf("%d", &num[i]);
        }while(num[i]<0);
    }
    printf("==== PARES ====\n");
    for(i=0; i<=9; i++){
        if(num[i]%2==0){
            printf("%d\t", num[i]);
            cont++;
        }
    }
    printf("\nExistem %d numeros pares no vetor\n", cont);
    printf("\n==== DIVISIVEIS POR 3 E POR 5 ====\n");
    cont=0;
    for(i=0; i<=9; i++){
        if(num[i]%3==0 && num[i]%5==0){
            printf("%d\t", num[i]);
            cont++;
        }
    }
    printf("\nExistem %d numeros divisiveis por 3 e por 5 no vetor\n", cont);
    cont=0;
    printf("\n==== MENORES QUE 10 OU MAIORES QUE 100 ====\n");
    for(i=0; i<=9; i++){
        if(num[i]<10 || num[i]>100){
            printf("%d\t", num[i]);
            cont++;
        }
    }
    printf("\nExistem %d numeros menores que 10 ou maiores que 100 no vetor\n", cont);
    cont=0;
    printf("\n==== MAIORES QUE 10 E MENORES QUE 100 ====\n");
    for(i=0; i<=9; i++){
        if(num[i]>10 && num[i]<100){
            printf("%d\t", num[i]);
            cont++;
        }
    }
    printf("\nExistem %d numeros maiores que 10 e menores que 100 no vetor\n", cont);
    cont=0;
    printf("\n==== IMPARES ====\n");
    for(i=0; i<=9; i++){
        if(num[i]%2!=0){
            printf("%d\t", num[i]);
            cont++;
        }
    }
    percent=(cont*100)/10;
    printf("\nExistem %d numeros impares no vetor representando %.2f%% dos elementros do vetor\n", cont, percent);

    return 0;
}
