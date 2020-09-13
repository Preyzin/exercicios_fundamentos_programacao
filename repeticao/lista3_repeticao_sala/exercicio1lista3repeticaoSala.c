#include <stdio.h>


int main (void)
{
    int i;

    for(i=1; i<=1000; i+2){
        if(i%11==0){
            printf("%d\t", i);
        }
    }


    return 0;
}
