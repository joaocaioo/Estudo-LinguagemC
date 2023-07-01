/*28. Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três valores lidos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float v1, v2, v3, soma;

printf("Digite o primeiro valor\n");
scanf("%f", &v1);
printf("Digite o segundo valor\n");
scanf("%f", &v2);
printf("Digite o terceiro valor\n");
scanf("%f", &v3);

soma = pow(v1,2) + pow(v2,2) + pow(v3,2);

printf("A soma dos quadrados dos tres valores e igual a %.2f", soma);

return 0;

}