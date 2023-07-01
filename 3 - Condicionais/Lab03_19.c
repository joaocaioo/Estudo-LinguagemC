/*19. Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5, mas, não simultaneamente pelos dois.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

int n, resto3, resto5;

printf("Digite um numero inteiro\n");
scanf("%d", &n);

resto3 = n % 3;
resto5 = n % 5;

if(resto3 == 0){

    printf("Esse numero e divisivel por 3");

}else if(resto5 == 0){

    printf("Esse numero e divisivel por 5");

}else{

    printf("Esse numero nao e divisivel nem por 3 nem por 5");

}

return 0;

}