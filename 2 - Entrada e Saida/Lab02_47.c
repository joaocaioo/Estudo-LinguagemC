/*47. Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

int valor, digito1, digito2, digito3, digito4;

printf("Digite um numero inteiro de 4 dígitos (de 1000 a 9999)\n");
scanf("%d", &valor);

digito4 = valor % 10;
digito3 = (valor % 100) / 10;
digito2 = (valor % 1000) / 100;
digito1 = valor / 1000;

printf("%d\n%d\n%d\n%d", digito1, digito2, digito3, digito4);

return 0;

}