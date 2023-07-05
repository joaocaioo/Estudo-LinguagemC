/*7. Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.*/

#include <stdio.h>
#include <stdlib.h>


int main(void){


int i;
float a, n = 0;

for (i = 1; i <= 10;)
{
    
    printf("Digite um valor\n");
    scanf("%f", &a);

    if(a >= 0){

        i++;
        n += a;

    }else{

        printf("Numero invalido, Digite um numero positivo\n");
    }

}

printf("A media dos 10 valores positivos equivale a %.2f\n", n / 10);


return 0;

}


