#include <stdio.h>

int main()
{
    int idade, na=0, nf=0, sum=0;
    char c;

    do{
        printf("\nInforme a idade: ");
        scanf("%d", &idade);

        if(idade>0){

            printf("\nDigite A para Autonomo ou F para Funcionario: ");
            fflush(stdin);
            scanf("%c", &c);

            if(c=='a' || c=='A'){
                if(idade<18){
                    na++;
                }
            }
            else if(c=='f' || c=='F'){
                if(idade>=18){
                    nf++;
                    sum+=idade;
                }
            }

        }

    }while(idade>0);
    printf("\nTotal de profissionais autonomos com menos de 18 anos: %d", na);
    printf("\nMedia das idades dos funcionarios com mais de 18 anos: %.2f", (float)sum/nf);

    return 0;
}
