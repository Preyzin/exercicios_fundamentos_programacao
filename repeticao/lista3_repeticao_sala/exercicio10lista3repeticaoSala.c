#include <stdio.h>

int main()
{
    long long int repeti, i, a, b, aux;

    printf("\nQuantos numero mostrar: ");
    scanf("%lld", &repeti);
    a=0;
    b=1;

    printf("%lld\t", b);

    for(i=0; i<repeti; i++){
        aux=a+b;
        a=b;
        b=aux;
        printf("%lld\t", aux);
    }



    return 0;
}
