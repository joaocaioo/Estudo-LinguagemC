/*26. Leia um valor de área em metros quadrados m2 e apresente-o convertido em hectares. A fórmula de conversão é: H = M*0.0001, sendo M a área em metros quadrados e H a área em hectares.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

float m2, ha;

printf("Digite um valor de area em metros quadrados\n");
scanf("%f", &m2);

ha = m2 * 0.0001;

printf("%f metros quadrados equivalem a %f hectares", m2, ha);

return 0;

}