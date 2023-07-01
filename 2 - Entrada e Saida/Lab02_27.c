/*27. Leia um valor de área em hectares e apresente-o convertido em metros quadrados m2. A fórmula de conversão é: M = H*10000, sendo M a área em metros quadrados e H a área em hectares.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

float ha, m2;

printf("Digite um valor de area em hectares\n");
scanf("%f", &ha);

m2 = ha * 10000;

printf("%f hectares equivalem a %f metros quadrados", ha, m2);

return 0;

}