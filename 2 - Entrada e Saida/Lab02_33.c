/*33. Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float lado, area;

printf("Digite o tamanho do lado de um quadrado\n");
scanf("%f", &lado);

area = pow(lado, 2);


printf("A area de um quadrado com lado %.2f e de %.2f", lado, area);

return 0;

}