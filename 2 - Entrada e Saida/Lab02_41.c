/*41. Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor calculado.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

int horas;
float valor, salario, adicional;

printf("Digite o valor da hora trabalhada\n");
scanf("%f", &valor);
printf("Digite o numero de horas trabalhadas no mes\n");
scanf("%d", &horas);

salario = valor * horas;
adicional = salario + (salario * 0.1);

printf("O salario por %d horas trabalhadas equivalem a R$%.2f", horas, adicional);

return 0;

}