#include <stdio.h>

int main()
{
    int conta, a, b, c, d, verif, num, sum, inverso;

    do{
        printf("\nInforme o numero da conta: ");
        scanf("%d", &num);

    }while(conta<1000 && conta>9999);
    printf("\nConta: %d", num);

    a=num/1000;
    b=num%1000/100;
    c=num%100/10;
    d=num%10;

    conta=a*100+b*10+c;
    printf("\nConta corrente: %d", conta);
    printf("\nPrimeiro digito: %d", a);
    printf("\nSegundo digito: %d", b);
    printf("\nTerceiro digito: %d", c);
    printf("\nQuarto digito: %d", d);

    inverso=c*100+b*10+a;
    printf("\nInverso: %d", inverso);
    sum=conta+inverso;
    printf("\n%d + %d = %d", conta, inverso, sum);

    if(sum<1000){
        verif=(sum/100)+((sum%100/10)*2)+((sum%10)*3);
        verif=verif%10;
    }
    else{
        verif=(sum%1000/100)+((sum%100/10)*2)+((sum%10)*3);
        verif=verif%10;
    }

    printf("\nX = %d", verif);

    printf("\nO digito verificador esta correto");



    return 0;
}
