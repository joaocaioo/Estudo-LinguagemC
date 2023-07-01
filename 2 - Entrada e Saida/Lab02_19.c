/*19. Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m3. A fórmula de conversão é: M = L /1000, sendo L o volume em litros e M o volume em metros cúbicos.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

float l, m3;

printf("Digite um volume em litros\n");
scanf("%f", &l);

m3 = l / 1000;

printf("%.2f litros equivalem a %.2f metros cubicos", l, m3);

return 0;

}