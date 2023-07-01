/*05. Leia um número real e imprima a quinta parte deste número.*/

#include <stdio.h>
#include <stdlib.h>

int main (void){

float x, quinta;

printf("Digite um numero real:\n");
scanf("%f", &x);

quinta = x / 5;

printf("A quinta parte do numero escolhido: %.2f", quinta);

return 0;



}
