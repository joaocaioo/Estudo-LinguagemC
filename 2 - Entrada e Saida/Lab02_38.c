/*38. Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele recebeu um aumento de 25%.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

float salario, aumento;

printf("Digite o salario de um funcionario\n");
scanf("%f", &salario);

aumento = salario + (salario * 0.25);


printf("O salario de um funcionario era de R$%.2f e com aumento ficara R$%.2f", salario, aumento);

return 0;

}