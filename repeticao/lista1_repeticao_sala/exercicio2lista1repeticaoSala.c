#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for(i=0; i<=50; i++){

        if(i%5==0){
            printf("%d\t", i);
        }
    }

    return 0;
}
