/*
3) Ler três valores inteiros diferentes e colocá-los em ordem crescente. Os valores devem
ser apresentados com uma instrução:
printf("Menor: %d Meio: %d Maior: %d\n", menor, meio, maior);
Sugestão: Dividir o problema em partes: encontrar o maior, o menor e o do meio
separadamente. Armazenar os valores em variável e mostrá-los com uma instrução.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, menor, meio, maior;

    printf("\nDiga um numero: ");
    scanf("%d", &n1);
    printf("\nDiga um numero: ");
    scanf("%d", &n2);
    printf("\nDiga um numero: ");
    scanf("%d", &n3);

    if((n1<n2 && n1>n3) || (n1<n3 && n1>n2)){
        meio=n1;
        if(n2>n3){
            maior=n2;
            menor=n3;
        }
        else if(n3>n2){
            maior=n3;
            menor=n2;
        }
    }
    else if((n2<n1 && n2>n3) || (n2<n3 && n2>n1)){
        meio=n2;
        if(n1>n3){
            maior=n1;
            menor=n3;
        }
        else if(n3>n1){
            maior=n3;
            menor=n1;
        }
    }
    else{
        meio=n3;
        if(n1>n2){
            maior=n1;
            menor=n2;
        }
        else if(n2>n1){
            maior=n2;
            menor=n1;
        }
    }
    printf("\nMenor: %d Meio: %d Maior: %d", menor, meio, maior);

    return 0;
}
