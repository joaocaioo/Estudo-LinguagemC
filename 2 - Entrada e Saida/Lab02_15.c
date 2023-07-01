/*15. Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão é: G = R*180/, sendo G o ângulo em graus e R em radianos e  = 3.141592.*/

#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

int main (void){

float r, g;

printf("Digite um angulo em radianos:\n");
scanf("%f", &r);

g = r*180/PI;

printf("%.2f radianos equivalem a %.2f graus", r, g);

return 0;





}