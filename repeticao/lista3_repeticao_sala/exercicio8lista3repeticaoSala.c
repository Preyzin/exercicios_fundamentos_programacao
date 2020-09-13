#include <stdio.h>

int main()
{
    int i, sum=0, contimp=0, contpar=0;

    for(i=100; i<=200; i++){
        if(i%2==0){
            printf("%d\t", i);
            if(i%5==0){
                contpar++;
                sum+=i;
            }
        }
        if(i%2!=0 && i%3!=0){
            contimp++;
        }
    }
    printf("\nNumero de impares e nao divisiveis por 3 no intervalo: %d", contimp);
    printf("\nMedia pares e divisiveis por 5: %.2f", (float)sum/contpar);

    return 0;
}
