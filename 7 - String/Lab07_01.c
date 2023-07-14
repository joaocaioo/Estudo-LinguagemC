/*1. Faça um programa que leia uma string e a imprima.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char str[50];
    printf("Digite uma string\n");
    fgets(str, 50, stdin);
    printf("\n%s", str);

    return 0;
}