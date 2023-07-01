/*32. Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

int x, ant, suc, soma;

printf("Digite um numero inteiro\n");
scanf("%d", &x);

ant = (2 * x) - 1;
suc = (3 * x) + 1;

soma = suc + ant;


printf("A soma do sucessor de seu triplo com o antecessor de seu dobro e %d", soma);

return 0;

}