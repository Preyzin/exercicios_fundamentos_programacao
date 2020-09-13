#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void gerarVetorInteiroLimiteSemRepeticao(int vetor[], int tamanho, int limite){
    int i, j;

    srand(time(NULL));

    for(i=0; i<tamanho; i++){
        vetor[i] = rand()%limite+1;
        for(j=0; j<i; j++){
            if(vetor[i]==vetor[j]){
                i--;
                break;
            }
        }
    }
}

void gerarVetorInteiros0Limite(int vetor[], int tamanho, int limite)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tamanho; i++)
    {
        vetor[i] = rand()%(limite+1);
    }
}


void gerarVetorInteiros(int vetor[], int tamanho, int limite)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tamanho; i++)
    {
        vetor[i] = 1 + rand()%limite;
    }
}

void gerarVetorInteiroComLimite(int vetor[], int tamanho, int lim1, int lim2)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tamanho; i++)
    {
        vetor[i] = rand()%((lim2-lim1)+1)+lim1;
    }

}


void mostrarVetorInteiros(int vetor[], int tamanho)
{
    int i;

    for(i=0; i<tamanho; i++)
    {
        printf("%d\t", vetor[i]);
    }

}


void ordenaVetorInteiro(int vetor[], int tamanho)
{
    int i, j, aux;

    for(i=0; i<tamanho; i++)
    {
        for(j=i+1; j<tamanho; j++)
        {
            if(vetor[i]>vetor[j])
            {
                aux=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=aux;
            }
        }

    }

}


int contCaractereStringCEspaco(char vet[]){
    int i=0;

    while(vet[i] != '\0'){
        i++;
    }

    return i;

}

int contCaractereStringSEspaco(char vet[]){
    int i=0, resultado=0;

    while(vet[i] != '\0'){
        if(vet[i] != ' '){
            resultado++;
        }
        i++;
    }

    return resultado;
}
