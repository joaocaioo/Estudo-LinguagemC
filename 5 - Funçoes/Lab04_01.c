/*1. Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro.*/

#include <stdio.h>
#include <stdlib.h>

int dobro(int a){

    return a * 2;

}

int main (void){

    int x, z;

    printf("Digite um numero inteiro\n");
    scanf("%d", &x);

    z = dobro(x);

    printf("O dobro de %d e %d", x, z);

    return 0;
}