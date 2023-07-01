/*52. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um ganharia do prêmio com base no valor investido.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float amigo1, amigo2, amigo3, premioTotal;

printf("Digite o valor do premio\n");
scanf("%f", &premioTotal);

printf("Digite o primeiro amigo apostou\n");
scanf("%f", &amigo1);
printf("Digite o segundo amigo apostou\n");
scanf("%f", &amigo2);
printf("Digite o terceiro amigo apostou\n");
scanf("%f", &amigo3);

float investimento = amigo1 + amigo2 + amigo3;

amigo1 = amigo1 / investimento;
amigo2 = amigo2 / investimento;
amigo3 = amigo3 / investimento;

float premio1 = premioTotal * amigo1;
float premio2 = premioTotal * amigo2;
float premio3 = premioTotal * amigo3;

printf("Premio total: R$%.2f\nParcela amigo 1: R$%.2f\nParcela amigo 2: R$%.2f\nParcela amigo 3: R$%.2f ", premioTotal, premio1, premio2, premio3);

return 0;

}