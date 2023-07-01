/*51. Escreva um programa que leia as coordenadas x e y de pontos no R² e calcule sua distância da origem (0, 0).*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

int x2, y2;

printf("Digite as coordenadas x e y\n");
scanf("%d %d", &x2, &y2);

int distancia = sqrt(pow(x2,2)+pow(y2,2));

printf("Partindo do ponto de origem(0, 0) e indo para (%d, %d) a distancia percorrida e de: %d", x2, y2, distancia);

return 0;

}