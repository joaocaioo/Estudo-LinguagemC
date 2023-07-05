/*6. Faça um programa que leia 10 inteiros e imprima sua média.*/

#include <stdio.h>
#include <stdlib.h>


int main(void){


int i;
float a, n = 0;

for (i = 1; i <= 10; i++)
{
    printf("Digite um valor\n");
    scanf("%f", &a);

    n += a;

}

printf("A media dos 10 valores equivale a %.2f\n", n / 10);


return 0;

}


