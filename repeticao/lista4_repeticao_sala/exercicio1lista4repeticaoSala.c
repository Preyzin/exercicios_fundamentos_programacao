#include <stdio.h>

int main()
{
    int anos=0;
    float a=1.50, b=1.10;

    while(a>=b){
        a+=0.02;
        b+=0.03;
        anos++;
    }

    printf("\nAltura final da arvore A: %.2f", a);
    printf("\nAltura final da arvore b: %.2f", b);
    printf("\nSao necessarios %d anos para que a arvore B fique maior do que a arvore A", anos);

    return 0;
}
