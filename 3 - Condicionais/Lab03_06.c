/*6. Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim como a diferença existente entre ambos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void){

int x, y;


printf("Digite dois numeros:\n");
scanf("%d %d", &x, &y);

int diferenca = x - y;

if (x > y){
    printf("O numero %d e maior do que %d", x, y);
} else{
    printf("O numero %d e maior do que %d", y, x);
}

printf("\nA diferenca entre %d e %d equivale a %d", x, y, diferenca);

return 0;

}