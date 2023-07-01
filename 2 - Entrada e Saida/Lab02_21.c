/*21. Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula de conversão é: K = L*0.45, sendo K a massa em quilogramas e L a massa em libras.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

float lbs, kg;

printf("Digite um valor em libras\n");
scanf("%f", &lbs);

kg = lbs * 0.45;

printf("%.2f libras equivalem a %.2f quilogramas", lbs, kg);

return 0;

}