/*1. Faça um programa que leia uma string e a imprima.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char string[50];
    printf("Digite uma string\n");
    fgets(string, 50, stdin);
    printf("%s", string);

    return 0;
}