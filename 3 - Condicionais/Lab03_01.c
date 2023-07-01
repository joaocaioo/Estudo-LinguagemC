/*1. Faça um programa que receba dois números e mostre qual deles é o maior.*/

#include <stdio.h>
#include <stdlib.h>

int main (void){

int x, y;

printf("Digite dois numeros:\n");
scanf("%d %d", &x, &y);


if (x > y){
    printf("%d e maior que %d", x, y);
} else{
    printf("%d e maior que %d", y, x);
}

return 0;

}