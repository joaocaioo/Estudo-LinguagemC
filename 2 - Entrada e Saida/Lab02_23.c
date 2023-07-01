/*23. Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula de conversão é: J = M/0.91, sendo J o comprimento em jardas e M o comprimento em metros.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

float m, yd;

printf("Digite um comprimento em metros\n");
scanf("%f", &m);

yd = m / 0.91;

printf("%.2f metros equivalem a %.2f jardas", m, yd);

return 0;

}