/*18. Faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu programa então pede dois valores numéricos e realiza a operação, mostrando o resultado e saindo.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

int opcao;
float x, y;

printf("MENU OPERACOES MATEMATICAS\n");
printf("1- Soma\n");
printf("2- Subtracao\n");
printf("3- Multiplicacao\n");
printf("4- Divisao\n");
scanf("%d", &opcao);

printf("Digite um numero 'x'\n");
scanf("%f", &x);
printf("Digite um numero 'y'\n");
scanf("%f", &y);

switch (opcao)
{
case 1:
    printf("SOMA:\n%.1f + %.1f = %.1f", x, y, x+y);
    break;
case 2:
    printf("SUBTRACAO:\n%.1f - %.1f = %.1f", x, y, x-y);
    break;
case 3:
    printf("MULTIPLICACAO:\n%.1f * %.1f = %.1f", x, y, x*y);
    break;
case 4:
    printf("DIVISAO:\n%.1f / %.1f = %.2f", x, y, x/y);
    break;
}

return 0;

}