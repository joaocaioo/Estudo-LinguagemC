/*5. Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void){

int x, resto;

printf("Digite um numero:\n");
scanf("%d", &x);

resto = x % 2;

if (resto == 0){
    printf("O numero %d e PAR", x);
} else{
    printf("O numero %d e IMPAR", x);
}

return 0;

}
