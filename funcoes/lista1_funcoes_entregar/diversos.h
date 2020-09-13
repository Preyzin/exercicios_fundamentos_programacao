#include <stdio.h>

int quadrado(int num){
    int quadrado;

    quadrado = num*num;

    return quadrado;
}

float calcPolegada(float centimetro){
    float polegada;

    polegada=centimetro*0.393701;

    return polegada;
}

float ConverterModeadas(float valor, float cotacao, char tipo)
{
    float valorConvertido;

    if(tipo=='d' || tipo=='D')
    {
        valorConvertido=valor/cotacao;
        return valorConvertido;
    }
    if(tipo=='r' || tipo=='R')
    {
        valorConvertido=valor*cotacao;
        return valorConvertido;
    }

}

int multiplicacao(int n1, int n2)
{
    int result;

    result=n1*n2;

    return result;
}
