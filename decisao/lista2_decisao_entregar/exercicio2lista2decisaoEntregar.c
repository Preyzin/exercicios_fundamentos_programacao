/*
2) Faça um programa que apresente o menu a seguir e permita ao usuário escolher a
opção desejada, receba os dados necessários para executar a operação e mostre o
resultado.
Menu de opções:
1 – Mostra os números em ordem crescente
2 – Mostra os números em ordem decrescente
3 - Mostra os números que são múltiplos de 2
Digite a opção desejada:
Observações: Ler um conjunto de 4 valores inteiros: opcao, a, b e c. A seguir:
a) Se opcao = 1 escrever os três valores a, b e c em ordem crescente.
b) Se opcao = 2 escrever os três valores a, b e c em ordem decrescente.
c) Se opcao = 3 escrever se os valores a, b e c são múltiplos de 2.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, menor, maior, meio;
    char conf;

    printf("\n1 - Mostra os numeros em ordem crescente");
    printf("\n2 - Mostra os numeros em ordem decrescente");
    printf("\n3 - Mostra os numeros que sao multiplos de 2");
    printf("\nDigite a opçao desejada: ");
    scanf("%c", &conf);
    fflush(stdin);

    printf("\nInforme um numero: ");
    scanf("%d", &n1);
    printf("\nInforme um numero: ");
    scanf("%d", &n2);
    printf("\nInforme um numero: ");
    scanf("%d", &n3);

    if((n1<n2 && n1>n3) || (n1<n3 && n1>n2)){
        meio=n1;
        if(n2>n3){
            maior=n2;
            menor=n3;
        }
        else if(n3>n2){
            maior=n3;
            menor=n2;
        }
    }
    else if((n2<n1 && n2>n3) || (n2<n3 && n2>n1)){
        meio=n2;
        if(n1>n3){
            maior=n1;
            menor=n3;
        }
        else if(n3>n1){
            maior=n3;
            menor=n1;
        }
    }
    else{
        meio=n3;
        if(n1>n2){
            maior=n1;
            menor=n2;
        }
        else if(n2>n1){
            maior=n2;
            menor=n1;
        }
    }
    if(conf=='1'){
        printf("\nOs numeros %d, %d e %d em ordem crescente: %d, %d e %d", n1, n2, n3, menor, meio, maior);
    }
    else if(conf=='2'){
        printf("\nOs numeros %d, %d e %d em ordem decrescente: %d, %d e %d", n1, n2, n3, maior, meio, menor);
    }
    else if(conf=='3'){
        if((menor%2)==0){
            printf("\nO numero %d eh multiplo de dois", menor);
        }
        else{
                printf("\nO numero %d nao eh multiplo de dois", menor);
            }

        if((meio%2)==0){
            printf("\nO numero %d eh multiplo de dois", meio);
            }
            else{
                printf("\nO numero %d nao eh multiplo de dois", meio);
            }

        if((maior%2)==0){
            printf("\nO numero %d eh multiplo de dois", maior);
            }
            else{
                printf("\nO numero %d nao eh multiplo de dois", maior);
            }

    }
    else{
        printf("\nOpcao invalida");
    }
    return 0;
}
