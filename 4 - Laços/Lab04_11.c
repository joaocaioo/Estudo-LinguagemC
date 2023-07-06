/*11. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

int i, n;

printf("Digite um numero positivo\n");
scanf("%d", &n);

if(n < 0){

    printf("Numero invalido, digite um numero positivo!\n");
    return 0;

}

printf("0 ate %d em ordem crescente:\n", n);
for (i = 0; i <= n; i++)
{
    printf("%d ", i);
}


return 0;

}
