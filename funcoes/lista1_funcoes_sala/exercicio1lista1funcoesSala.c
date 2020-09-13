#include <stdio.h>
int n1, n2, resultado;
void soma(void){

    printf("\nInforme um numero: ");
    scanf("%d", &n1);
    printf("\nInforme um numero: ");
    scanf("%d", &n2);
    resultado=n1+n2;
    printf("\nSoma: %d", resultado);
}

void subtracao(int n1, int n2){
    resultado=n1-n2;
}

int multiplicacao(void){
    printf("\nInforme um numero: ");
    scanf("%d", &n1);
    printf("\nInforme um numero: ");
    scanf("%d", &n2);

    return(n1*n2);
}

float divisao(int n1, int n2){
    return((float)n1/n2);
}

int resto(int n1, int n2){
    return(n1%n2);
}

int main()
{
    char conf, repete;

    do{
    printf("A - Adicionar\nS - Subtrair\nM - Multiplicar\nD - Dividir\nR - Resto\n");
    fflush(stdin);
    scanf("%c", &conf);


    switch(conf){
    case 'a':
    case 'A':

        soma();

        break;

    case 's':
    case 'S':
        printf("\nInforme um numero: ");
        scanf("%d", &n1);
        printf("\nInforme um numero: ");
        scanf("%d", &n2);
        subtracao(n1, n2);
        printf("\nSubtracao: %d", resultado);
        break;

    case 'm':
    case 'M':

        printf("\nMultiplicacao: %d", multiplicacao());

        break;

    case 'd':
    case 'D':
        printf("\nInforme um numero: ");
        scanf("%d", &n1);
        printf("\nInforme um numero: ");
        scanf("%d", &n2);

        printf("\nDivisao: %.2f", divisao(n1, n2));
        break;

    case 'r':
    case 'R':
        printf("\nInforme um numero: ");
        scanf("%d", &n1);
        printf("\nInforme um numero: ");
        scanf("%d", &n2);

        printf("\nResto: %d", resto(n1, n2));
        break;


    }
    printf("\nDeseja continuar <S , s>: ");
    fflush(stdin);
    scanf("%c", &repete);
    }while(repete == 'S' || repete == 's');


}
