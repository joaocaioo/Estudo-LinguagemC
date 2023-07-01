/*06. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A formula de conversão é: F = C*(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/

#include <stdio.h>
#include <stdlib.h>

int main (void){

float c, f;

printf("Digite a temperatura em Celsius:\n");
scanf("%f", &c);

f = c*(9.0/5.0)+32.0;

printf("%.2f graus Celsius sao %.2f graus Fahrenheit", c, f);

return 0;


}
