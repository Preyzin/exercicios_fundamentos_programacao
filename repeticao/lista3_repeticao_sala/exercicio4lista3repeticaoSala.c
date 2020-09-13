#include <stdio.h>

int main()
{
    int i, lim1, lim2, x, y;

    printf("\nInforme um valor para o limite inferior do intervalor: ");
    scanf("%d", &lim1);

    do{
        printf("\nInforme um valor para o limite superior do intervalor: ");
        scanf("%d", &lim2);
    }while(lim1==lim2);

    if(lim1>lim2){
        i=lim1;
        lim1=lim2;
        lim2=i;
    }

    printf("\nInforme um valor para X: ");
    scanf("%d", &x);

    printf("\nInforme um valor para Y: ");
    scanf("%d", &y);

    for(i=lim1; i<=lim2; i++){
        if(i%x==0 && i%y!=0){
            printf("%d\t", i);
        }
    }

    return 0;
}
