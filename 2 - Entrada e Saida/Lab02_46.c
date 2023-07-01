/*46. Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). Gere outro número formado pelos dígitos invertidos do número lido. Exemplo:
numero_lido = 123
numero_gerado = 321*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

int valor, digito1, digito2, digito3;

printf("Digite um numero inteiro positivo de tres digitos (de 100 a 999)\nnumero_lido = ");
scanf("%d", &valor);

digito3 = valor % 10;
digito2 = (valor / 10) % 10;
digito1 = valor / 100;

printf("numero_gerado = %d%d%d", digito3, digito2, digito1);

return 0;

}