/*17. Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas. A fórmula de conversão é: P = C/2.54, sendo C o comprimento em centímetros e P o comprimento em polegadas.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

float c, p;

printf("Digite uma medida em centimetros\n");
scanf("%f", &c);

p = c / 2.54;

printf("%.2f centimetros equivalem a %.2f polegadas", c, p);

return 0;

}