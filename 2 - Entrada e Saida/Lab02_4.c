/*04. Leia um número real e imprima o resultado do quadrado desse número.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){

float x, quadrado;

printf("Digite um numero real:\n");
scanf("%f", &x);

quadrado = pow(x,2);

printf("O quadrado do numero escolhido: %.2f", quadrado);


return 0;

}