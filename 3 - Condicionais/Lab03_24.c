/*24. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um programa em que o usuário entre com o valor e o estado destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrar uma mensagem de erro.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){


int estado;

float produto;


printf("Digite o valor do produto\n");
scanf("%f", &produto);

printf("TABELA DE IMPOSTO\n");
printf("1 - MG 7%%\n");
printf("2 - SP 12%%\n");
printf("3 - RJ 15%%\n");
printf("4 - MS 8%%\nOpcao: ");
scanf("%d", &estado);

switch (estado){
case 1:
    produto += (produto * 0.07);
    printf("Valor do produto com imposto de MG: R$%.2f\n", produto);
    break;
case 2:
    produto += (produto * 0.12);
    printf("Valor do produto com imposto de MG: R$%.2f\n", produto);
    break;
case 3:
    produto += (produto * 0.15);
    printf("Valor do produto com imposto de MG: R$%.2f\n", produto);
    break;
case 4:
    produto += (produto * 0.08);
    printf("Valor do produto com imposto de MG: R$%.2f\n", produto);
    break;

default:
    printf("Escolha um estado valido!\n");
    break;
}

return 0;

}