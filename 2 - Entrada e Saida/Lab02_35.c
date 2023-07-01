/*35. Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação: ℎ𝑖𝑝𝑜𝑡𝑒𝑛𝑢𝑠𝑎 = √𝑎² + b². Faça um programa que receba os valores de a e b e calcule o valor da hipotenusa através da equação. Imprima o resultado dessa operação.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float a, b, hip;

printf("Digite um valor para o cateto a:\n");
scanf("%f", &a);
printf("Digite um valor para o cateto b:\n");
scanf("%f", &b);

hip = sqrt(pow(a,2) + pow(b,2));


printf("A hipotenusa de %.2f e %.2f corresponde a %.2f", a, b, hip);

return 0;

}