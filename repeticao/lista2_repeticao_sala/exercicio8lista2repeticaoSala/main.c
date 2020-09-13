#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, s=1;

    for(i=1;i<5;i++){
        s*=i;
    }
    printf("\n%d", s);


    return 0;
}
