/*36. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: V = PI * raio² * altura, onde PI = 3.141592.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592

int main(void){

float altura, raio, volume;

printf("Digite a altura de um cilindro circular\n");
scanf("%f", &altura);
printf("Digite o raio de um cilindro circular\n");
scanf("%f", &raio);

volume = PI * pow(raio, 2) * altura;


printf("O volume de um cilindro circular com altura %.2f e raio %.2f equivale a %.2f ", altura, raio, volume);

return 0;

}