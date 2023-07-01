/*18. Leia um valor de volume em metros cúbicos m3 e apresente-o convertido em litros. A fórmula de conversão é: L = 1000*M, sendo L o volume em litros e M o volume em metros cúbicos.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

float m3, l;

printf("Digite um volume em metros cubicos\n");
scanf("%f", &m3);

l = 1000 * m3;

printf("%.2f metros cubicos equivalem a %.2f litros", m3, l);

return 0;

}