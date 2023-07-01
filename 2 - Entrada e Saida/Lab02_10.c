/* 10. Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s (metros por segundo). A fórmula de conversão é: M = K/3.6, sendo K a velocidade em km/h e Mem m/s.*/

#include <stdio.h>
#include <stdlib.h>

int main (void){

float km, m;

printf("Digite uma velocidade em km/h:\n");
scanf("%f", &km);

m = km/3.6;

printf("%.2f km/h equivalem a %.2f m/s", km, m);

return 0;


}