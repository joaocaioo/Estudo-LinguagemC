/*37. Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo em vista que o desconto foi de 12%.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

float produto, desconto;

printf("Digite o valor do produto\n");
scanf("%f", &produto);

desconto = produto - (produto * 0.12);


printf("O produto no valor de R$%.2f, com desconto saira por R$%.2f", produto, desconto);

return 0;

}