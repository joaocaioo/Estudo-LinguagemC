/*6. Faça uma função que receba 3 números inteiros como parâmetro, representando horas, minutos e segundos, e os converta em segundos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int converteSeg(int h, int min, int seg){

    int horas = h * 3600;
    int minutos = min * 60;

    int segundos = horas + minutos + seg;
    printf("%02d:%02d:%02d equivalem a %d segundos\n", h, min, seg, segundos);
    return 0;

}

int main (void){

    int h, min, seg;

    
    printf("Digite uma hora (horas minutos segundos\n");
    scanf("%d %d %d", &h, &min, &seg);


   converteSeg(h, min, seg);

    return 0;
}