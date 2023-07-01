/*48. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float seg, hr, min;

printf("Digite um valor inteiro em segundos\n");
scanf("%f", &seg);

hr = seg / 3600;
min = seg / 60;

printf("Segundos: %.0f\nMinutos: %.0f\nHoras: %.2f", seg, min, hr);

return 0;

}