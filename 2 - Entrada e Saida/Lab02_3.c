/*03. Peça ao usuário para digitar três valores inteiros e imprima a soma deles.*/

#include <stdio.h>
#include <stdlib.h>

int main (void){

int x, y, z, soma;

printf("Digite 3 valores inteiros\n");
scanf("%d", &x);
scanf("%d", &y);
scanf("%d", &z);

soma = x + y + z;

printf("Soma dos 3 valores escolhidos : %d", soma);


return 0;


}