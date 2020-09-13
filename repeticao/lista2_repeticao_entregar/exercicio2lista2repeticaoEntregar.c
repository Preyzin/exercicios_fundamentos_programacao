/*
2) Elaborar um programa para automatizar o caixa de uma loja. Leia a quantidade e o
valor unitário de cada produto. Calcule o valor total da compra. Informe esse valor para o
usuário e o usuário informa o valor para pagamento. O programa calcula o troco e
informa-o ao usuário em notas de 10, 5, 1 e os centavos. Prosseguir a leitura enquanto a
quantidade for maior que zero. Se informado zero ou valor negativo para a quantidade,
não ler o valor unitário.
*/

#include <stdio.h>

int main (void)
{
    int qtd=1, notas10, notas5, notas1;
    float preco, total, pagamento, troco;


    while(qtd>0){
        printf("\nInforme a quantidade da compra: ");
        scanf("%d", &qtd);
        if(qtd<1){
            break;
        }
        printf("\nInforme o preco do produto: ");
        scanf("%f", &preco);
        total+=qtd*preco;

    }
    printf("\nValor a pagar pela compra: %.2f", total);

    printf("\nInforme o valor do pagamento: ");
    scanf("%f", &pagamento);

    troco=pagamento-total;

    notas10=(int)troco/10;
    notas5=((int)troco%10)/5;
    notas1=((int)troco%10)%5;

    printf("\nTroco: %.2f", troco);
    printf("\nNotas 10: %d", notas10);
    printf("\nNotas 5: %d", notas5);
    printf("\nNotas 1: %d", notas1);

    printf("\nCentavos: %.2f", troco-(int)troco);





    return 0;
}
