/*09. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A fórmula de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.*/

#include <stdio.h>
#include <stdlib.h>


int main(void){

float c, k;

printf("Digite a temperatura em Celsius:\n");
scanf("%f", &c);

k = c + 273.15;

printf("%.2f graus Celsius sao %.2f graus Kelvin ", c, k);

return 0;


}
