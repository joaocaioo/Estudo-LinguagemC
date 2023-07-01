/*31. Leia um número inteiro e imprima o seu antecessor e o seu sucessor.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

int x, ant, suc;

printf("Digite um numero inteiro\n");
scanf("%d", &x);

ant = x - 1;
suc = x + 1;


printf("O antecessor de %d e %d, e o seu sucessor e %d", x, ant, suc);

return 0;

}