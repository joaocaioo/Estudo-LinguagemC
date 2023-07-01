/*43. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
- o total a pagar com desconto de 10%;
- o valor de cada parcela, no parcelamento de 3X sem juros;
- a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto);
- a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total).*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

float valor, desconto, parcela, vista, parcelado;

printf("Digite o valor total da compra\n");
scanf("%f", &valor);

desconto = valor - (valor * 0.1);
parcela = valor / 3;
vista = desconto * 0.05;
parcelado = valor * 0.05;


printf("Por uma compra no valor de R$%.2f:\n-Valor com desconto: R$%.2f\n-Valor parcelado em 3X: R$%.2f\n-Comissao de venda a vista: R$%.2f\n-Comissao de venda parcelada: R$%.2f", valor, desconto, parcela, vista, parcelado);

return 0;

}