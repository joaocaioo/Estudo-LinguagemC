/*40. Uma empresa contrata um encanador a R$30,00 por dia. Faça um programa que solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo-se que são descontados 8% para imposto de renda.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

int contrato = 30, dias;
float valor, imposto;

printf("Digite o numero de dias trabalhados pelo encanador\n");
scanf("%d", &dias);

valor = contrato * dias;
imposto = valor - (valor * 0.08);


printf("O valor a ser pago pelos %d dias de trabalho do encanador sao de %.2f", dias, imposto);

return 0;

}