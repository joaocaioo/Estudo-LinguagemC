/*12. Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de conversão é: K = 1.61*M, sendo K a distância em quilômetros e M em milhas.*/

#include <stdio.h>
#include <stdlib.h>

int main (void){

float milhas, km;

printf("Digite uma distancia em milhas:\n");
scanf("%f", &milhas);

km = 1.61 * milhas;

printf("%.2f milhas equivalem a %.2f km", milhas, km);

return 0;



}