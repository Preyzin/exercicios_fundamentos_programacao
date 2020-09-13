#include <stdio.h>

int main()
{
    int num;

    do{
        printf("Informe um numero: \n");
        scanf("%d", &num);

        if(num>=0){
            printf("A soma dos digitos eh: %.2f\n\n", (float)num/2);
        }


    }while(num>=0);


    return 0;
}
