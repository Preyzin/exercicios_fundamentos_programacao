#include <stdio.h>

int main()
{
    long long int base, expoente, mtp=1, a;

    printf("\nInforme o valor da base: ");
    scanf("%lld", &base);

    printf("\nInforme o valor do expoente: ");
    scanf("%lld", &expoente);

    a=expoente;
    while(a>=1){
        mtp*=base;
        a--;
    }

    printf("%lld ^ %lld = %lld", base, expoente, mtp);

    return 0;
}
