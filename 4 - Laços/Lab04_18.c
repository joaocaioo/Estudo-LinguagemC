/*18. Um funcionário recebe aumento anual. Em 1995 foi contratado por 2000 reais. Em 1996 recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem ao dobro do ano anterior. Faça programa que determine o salário atual do funcionário.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

int i; // ano
float salario, aumento;

salario = 2000; // valor do salario em 1995 
aumento = 0.015; // aumento recebido em 1996

for (i = 1997; i <= 2023; i++) // aumentos de 1997 ate 2023
{
    // aumentos a partir de 1997
    salario += (salario * (aumento * 2)); // salario atualiza de acordo com o aumento do ano anterior
    printf("Ano: %d Salario: R$%.2f\n", i, salario);
    
}

return 0;

}