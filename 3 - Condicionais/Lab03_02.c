/*2. Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){

int x;

printf("Informe um numero positivo:\n");
scanf("%d", &x);

if(x > 0){

    printf("A raiz de %d e : %.2f", x, sqrt(x));

} else{

    printf("Numero negativo");

}

return 0;

}