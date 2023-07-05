/*5. Faça um programa que peça ao usuário para digitar 10 valores e some-os.*/

#include <stdio.h>
#include <stdlib.h>


int main(void){


int a, n = 0, i;

for (i = 1; i <= 10; i++)
{
    printf("Digite um valor\n");
    scanf("%d", &a);

    n += a;

}

printf("A soma dos 10 valores equivale a %d\n", n);


return 0;

}


