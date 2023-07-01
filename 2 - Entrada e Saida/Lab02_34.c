/*34. Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente. A área do círculo é PI*raio² , considere PI = 3.141592.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592

int main(void){

float raio, area;

printf("Digite o valor do raio de um circulo\n");
scanf("%f", &raio);

area = PI * pow(raio, 2);


printf("A area do círculo de raio %.2f corresponde a %.2f", raio, area);

return 0;

}