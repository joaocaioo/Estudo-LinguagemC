/*10. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

int i, soma;

for (i = 0; i <= 50; i += 2)
{
    
    printf("%d ", i);

    soma += i;

}

printf("A soma dos 50 primeiros numeros pares equivale a: %d", soma);

return 0;

}
