/*13. Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de conversão é: M = K/1.61, sendo K a distância em quilômetros e M em milhas.*/

#include <stdio.h>
#include <stdlib.h>

int main (void){

float km, milhas;

printf("Digite uma distancia em quilometros:\n");
scanf("%f", &km);

milhas = km/1.61;

printf("%.2f km equivalem a %.2f milhas", km, milhas);

return 0;



}