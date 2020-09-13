/*
2) O custo ao consumidor de um carro novo é a soma do custo de fábrica com a
percentagem do distribuidor e a percentagem dos impostos (ambas aplicadas sobre o
custo de fábrica). Escrever um programa para, a partir do custo de fábrica do carro,
calcular e mostrar o custo ao consumidor.
*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    float custoconsumidor, custofabrica, pdistribuidor, pimposto;

    printf("\nInforme o custo de fabrica de um automovel: R$ ");
    scanf("%f", &custofabrica);
    printf("\nInforme a percentagem do distribuidor (0 a 100): ");
    scanf("%f", &pdistribuidor);
    printf("\nInforme a percentagem de impostos (0 a 100): ");
    scanf("%f", &pimposto);

    custoconsumidor=custofabrica+((pdistribuidor/100)*custofabrica)+((pimposto/100)*custofabrica);

    printf("\nO custo do veiculo ao consumidor eh: %.2f", custoconsumidor);


}

