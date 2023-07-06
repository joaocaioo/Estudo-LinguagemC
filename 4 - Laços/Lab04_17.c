/*17. Chico tem 1.50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1.10 metros e cresce 3 centímetros por ano. Escreva um programa que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

int i;
float chico = 1.50 , ze = 1.10;

for (i = 0; chico >= ze; i++)
{
    chico += 0.02 ;
    ze += 0.03;

}

printf("sao necessarios %d anos para ze ser maior que chico\nAltura de Chico: %.2f\nAltura de Ze: %.2f", i, chico, ze);


return 0;

}
