/*30. Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float real, dolar, converte;

printf("Digite um valor em real\n");
scanf("%f", &real);
printf("Digite a cotacao do dolar\n");
scanf("%f", &dolar);

converte = real * dolar; 

printf("%.2f reais equivalem a %.2f dolares na cotacao de %.2f", real, converte, dolar);

return 0;

}