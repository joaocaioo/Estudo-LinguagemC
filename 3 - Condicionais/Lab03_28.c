/*28. Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das seguintes médias de acordo com um valor numérico digitado pelo usuário:
(a) Geométrica: ³√x ∗ y ∗ z
(b) Ponderada: [(1∗x)+(2∗y)+(3∗z)]/3
(c) Harmônica: 1 / 1/x+1/y+1/z
(d) Aritmética:(𝑥+𝑦+𝑧)/3*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){


float x, y, z, geometrica, ponderada,harmonica, aritmetica;
char op;

printf("Digite tres numeros inteiros positivos\n");
scanf("%f %f %f", &x, &y, &z);

printf("Escolha uma das medias a seguir\n");
printf("(a) Geometrica\n");
printf("(b) Ponderada\n");
printf("(c) Harmonica\n");
printf("(d) Aritmetica\n");
scanf(" %c", &op);


switch (op)
{
case 'a':
    geometrica = pow((x * y * z), (double)1/3);
    printf("A media geometrica desses 3 valores equivale a %.2f", geometrica);
    break;
case 'b':
    ponderada = ((1 * x) + (2 * y) + (3 * z)) / 3;
    printf("A media ponderada desses 3 valores equivale a %.2f", ponderada);
    break;
case 'c':
    harmonica = 1 / ((1 / x) + (1 / y) + (1 / z));
    printf("A media harmonica desses 3 valores equivale a %.2f", harmonica);
    break;
case 'd':
    aritmetica = (x + y + z) / 3;
    printf("A media aritmetica desses 3 valores equivale a %.2f", aritmetica);
    break;

default:
    printf("Opcao invalida");
    break;
}

return 0;

}
