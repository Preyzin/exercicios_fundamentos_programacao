#include <stdio.h>

int main()
{
    int i;

    for(i=1000; i>=0; i--){
        if(i%10==0){
            printf("%d\t\t", i);
        }

    }


    return 0;
}
