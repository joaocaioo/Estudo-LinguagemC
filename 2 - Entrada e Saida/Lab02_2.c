/*02. Faça um programa que leia um número real e o imprima.*/

#include <stdio.h>
#include <stdlib.h>

int main (void){
    float x;

    printf("Digite um numero real:\n");
    scanf("%f", &x);

    printf("O numero real escolhido foi: %.2f", x);

    return 0;

}