/*24. Leia um valor de área em metros quadrados m2 e apresente-o convertido em acres. A fórmula de conversão é: A = M*0.000247, sendo M a área em metros quadrados e A a área em acres.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

float m2, ac;

printf("Digite um valor de area em metros quadrados\n");
scanf("%f", &m2);

ac = m2 * 0.000247;

printf("%.2f metros quadrados equivalem a %f acres", m2, ac);

return 0;

}