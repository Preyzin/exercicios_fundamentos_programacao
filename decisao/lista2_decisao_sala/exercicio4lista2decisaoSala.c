/*
4) Ler o g�nero (F ou f para feminino, M ou m para masculino. Para qualquer outro
caractere informar que � inv�lido e finalizar o programa). Se informado um caractere
v�lido, ler a altura da pessoa e calcular e mostrar o seu peso ideal, utilizando as seguintes
f�rmulas:
a) Para homens: (72.7 * h) - 58;
b) Para mulheres: (62.1 * h) - 44.7.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char gen;
    float alt, imc;

    printf("\nDigite F ou f para feminino, M ou m para masculino: ");
    scanf("%c", &gen);
    fflush(stdin);

    if(gen=='f' || gen=='F'){
        printf("\nInsira a altura: ");
        scanf("%f", &alt);
        imc=(62.1 * alt) - 44.7;
        printf("\nO peso ideal eh: %f", imc);
    }
    else if(gen=='m' || gen=='M'){
        printf("\nInsira a altura: ");
        scanf("%f", &alt);
        imc=(72.7 * alt) - 58;
        printf("\nO peso ideal eh: %f", imc);
    }
    else{
        printf("\nCaracter invalido!");
    }




    return 0;
}
