/*3. Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima o número ao quadrado.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){

float x;

printf("Digite um numero real:\n");
scanf("%f", &x);

if(x > 0){

    printf("A raiz do numero %.2f e %.2f", x, sqrt(x));

} else{

    printf("Numero negativo\nO quadrado do numero %.2f e %.2f", x, x*x);

}

return 0;

}