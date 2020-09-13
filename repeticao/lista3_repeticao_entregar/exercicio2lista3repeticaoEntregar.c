/*
2) Uma empresa deseja calcular a depreciação de seus bens. Para tanto, desenvolver um
programa que obtenha a taxa de depreciação anual para os bens, o valor do bem a ser
depreciado e o período em anos.
Valor depreciado = valor do bem * (taxa de depreciação / 100)
Valor do bem depreciado = valor do bem – valor depreciado
*/

#include <stdio.h>

int main()
{
    int anos, i;
    float valor;

    printf("\nInforme o valor do bem a ser depreciado: ");
    scanf("%f", &valor);
    printf("\nInforme o periodo da depreciacao <em anos>: ");
    scanf("%d", &anos);

    printf("\nAno\t\tValor do Bem\t\tDepreciacao\t\tValor Depreciado\n================================================================================");

    for(i=1; i<=anos; i++){
        printf("\n%d\t\t\%.2f\t\t\t%.2f\t\t\t%.2f", i, valor, valor*(1.5/100), valor-(valor*(1.5/100)));
        valor-=valor*(1.5/100);
    }
    printf("\n================================================================================");


}
