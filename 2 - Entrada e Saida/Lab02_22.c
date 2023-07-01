/*22. Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula de conversão é: M = 0.91*J, sendo J o comprimento em jardas e M o comprimento em metros.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

float yd, m;

printf("Digite um comprimento em jardas\n");
scanf("%f", &yd);

m = 0.91 * yd;

printf("%.2f jardas equivalem a %.2f metros", yd, m);

return 0;

}