/*11. Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h (quilômetros por hora). A fórmula de conversão é: K = M*3.6, sendo K a velocidade em km/h e M em m/s.*/

#include <stdio.h>
#include <stdlib.h>

int main (void){

float m, km;

printf("Digite uma velocidade em m/s:\n");
scanf("%f", &m);

km = m * 3.6;

printf("%.2f m/s equivalem a %.2f km/h", m, km);

return 0;


}