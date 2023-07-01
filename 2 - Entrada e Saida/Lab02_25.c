/*25. Leia um valor de área em acres e apresente-o convertido em metros quadrados m2. A fórmula de conversão é: M = A*4048.58, sendo M a área em metros quadrados e A a área em acres.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

float ac, m2;

printf("Digite um valor de area em acres\n");
scanf("%f", &ac);

m2 = ac * 4048.58;

printf("%f acres equivalem a %.2f metros quadrados", ac, m2);

return 0;

}