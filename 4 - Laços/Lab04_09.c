/*9. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

int i, n;

printf("Digite um numero inteiro N\n");
scanf("%d", &n);


for (i = 1; i <= n; i += 2)
{
    
    printf("%d ", i);

}

return 0;

}
