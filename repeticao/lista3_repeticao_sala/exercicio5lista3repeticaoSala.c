#include <stdio.h>

int main()
{
    int i, cont;
    float sum=0;

    for(i=200; i>=1; i--){
        printf("%d\t", i);
        if(i%5==0 && i%3==0){
            cont++;
            sum+=i;
        }
    }
    printf("\nMedia dos divisiveis por 3 e por 5: %.2f", (float)sum/cont);

    return 0;
}
