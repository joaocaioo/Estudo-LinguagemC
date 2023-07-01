/*42. Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7% de imposto sobre o salário-base.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

float salario, adicional, imposto;

printf("Digite o valor do salario-base de um funcionario\n");
scanf("%f", &salario);

adicional = salario + (salario * 0.05);
imposto = salario * 0.07;

salario = adicional - imposto;

printf("O salario final do funcionario equivale a R$%.2f", salario);

return 0;

}