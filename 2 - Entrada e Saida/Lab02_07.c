/*07. Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. A fórmula de conversão é: C = 5.0*(F- 32.0)/9.0, sendo C a temperatura em Celsius e F a temperatura em Fahrenheit.*/

#include <stdio.h>
#include <stdlib.h>

int main (void){

float f, c;

printf("Digite a temperatura em Fahrenheit:\n");
scanf("%f", &f);

c = 5.0*(f- 32.0)/9.0;

printf("%.2f graus Fahrenheit sao %.2f graus Celsius ", f, c);

return 0;



}