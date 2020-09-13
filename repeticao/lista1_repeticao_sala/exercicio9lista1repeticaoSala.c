/*9) Ler um n�mero que indica a quantidade de �mpares iniciando em 1
que deve ser mostrada. O valor informado para a quantidade deve ser
maior que 0. Validar a entrada.*/

#include <stdio.h>

int main(void)
{
    int num, i=1, contImpar=0;

    do
    {
        printf("Informe um numero: ");
        scanf("%d", &num);

        if(num <= 0)
        {
            printf("Valor invalido\n");
        }
    }while(num <= 0);

    do
    {
        printf("%d\t", i);
        contImpar++;
        i = i + 2;
    }while(contImpar < num);

    return 0;
}
