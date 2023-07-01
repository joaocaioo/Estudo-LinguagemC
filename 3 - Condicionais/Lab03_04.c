/*4. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
-O número digitado ao quadrado 
-A raiz quadrada do número digitado*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void){

float x;

printf("Digite um numero:\n");
scanf("%f", &x);

if (x > 0){

    printf("O quadrado de %.2f e %.2f\n", x, x*x);
    printf("A raiz de %.2f e %.2f", x, sqrt(x));
    
}else{

    printf("Este numero e negativo");
}

return 0;

}