#include <stdio.h>

void fat(int num){
    int i, mtp=1;


    for(i=1; i<=num; i++){
        mtp*=i;
    }
    printf("\n%d! = %d\n", num, mtp);
}

void mostraFat(int num){
    int i;
        printf("%d! = 1", num);
    for(i=1; i<=num; i++){

        if(i<=(num-1)){
        printf(" * %d", i+1);
        }
    }



}
