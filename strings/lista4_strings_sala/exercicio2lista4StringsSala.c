#include <stdio.h>

int main(void)
{
    char senha[7], senhaArmazenada[7]="123456";
    int i, tentativas=0;

    do
    {
        printf("Informe a senha: \n");
        fflush(stdin);
        gets(senha);

        i=0;
        while(senha[i]!='\0')
        {
            if(senha[i] != senhaArmazenada[i])
            {
                break;
            }
            i++;
            printf("I = %d\n", i);
        }
        if(i==6)
        {
            printf("Senha valida!\n");
            break;
        }
        else
        {
            printf("Acesso negado!\n");
            tentativas++;
        }
    }
    while(tentativas<3);

    return 0;
}
