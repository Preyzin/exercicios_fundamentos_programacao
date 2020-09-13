/*8) Fazer um programa que fa�a o levantamento dos candidatos que se inscreveram para
vagas em uma empresa. Considerando que para cada candidato, a empresa tenha obtido
as seguintes informa��es: - Idade
- Nacionalidade (B - Brasileiro ou E - Estrangeiro)
- Possui curso superior (S - Sim ou N - N�o)
Fa�a um programa para determinar:
a) A quantidade de brasileiros.
b) A quantidade de estrangeiros.
c) A idade m�dia dos brasileiros sem curso superior.
d) A menor idade entre os estrangeiros com curso superior.
Estabelecer uma condi��o para finalizar a entrada de dados do programa.
Por exemplo, igual a 0 ou idade negativa. Se a idade for igual a 0 ou negativa,
n�o ler as informa��es de nacionalidade e se possui curso superior, e sair do
programa.*/

#include <stdio.h>

int main(void)
{
    int idade=1, contB=0, contE=0, somaIdade=0, contIdade=0, primeiro=0, menorIdade=0;
    char nac, curso;
    float media;

    while(idade > 0)
    {
        printf("Informe a idade: ");
        scanf("%d", &idade);

        if(idade > 0)
        {
            printf("Informe a nacionalidade (B/b/E/e): ");
            fflush(stdin);
            scanf("%c", &nac);

            if(nac == 'B' || nac == 'b' || nac == 'E' || nac == 'e')
            {
                printf("Possui curso superior (S/s/N/n)? ");
                fflush(stdin);
                scanf("%c", &curso);

                if(curso == 'S' || curso == 's' || curso == 'N' || curso == 'n')
                {
                    if(nac == 'B' || nac == 'b')
                    {
                        contB++;

                        if(curso == 'N' || curso == 'n')
                        {
                            somaIdade = somaIdade + idade;
                            contIdade++;
                        }
                    }
                    else
                    {
                        contE++;

                        if(curso == 'S' || curso == 's')
                        {
                            if(primeiro == 0)
                            {
                                menorIdade = idade;
                                primeiro == 1;
                            }
                            else
                            {
                                if(idade < menorIdade)
                                {
                                    menorIdade = idade;
                                }
                            }
                        }
                    }

                }
            }
            else
            {
                printf("Valor invalido!\n");
            }
        }
    }

    printf("\nQuantidade de brasileiros: %d\n", contB);
    printf("Quantidade de estrangeiros: %d\n", contE);

    if(contIdade > 0)
    {
        media = (float)somaIdade / contIdade;
        printf("Idade media de brasileiros sem curso superior: %.2f\n", media);
    }
    else
    {
        printf("Nao existe nenhum candidato brasileiro sem curso superior\n");
    }

    printf("A menor idade dos estrangeiros sem curso superior eh: %d\n", menorIdade);

    return 0;
}
