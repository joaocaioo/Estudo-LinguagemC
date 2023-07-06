/*14. Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, e tem como saída o número de cada dado e a relação entre eles (>, <, =) de cada lançamento.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

int i, n;

 printf("Digite quantas vezes voce deseja jogar os dados\n");
 scanf("%d", &n);

 srand(time(NULL));

for (i = 1; i <= n; i++)
{
    int d1 = rand() % 6 + 1; //simulção do dado ['rand() % 6' -> 0 a 5]
    int d2 = rand() % 6 + 1;

    printf("Lancamento: %d Dado 1: %d Dado 2: %d Relacao: ", i, d1, d2);

    if (d1 > d2) {
            printf("%d > %d\n", d1, d2);
        } else if (d1 < d2) {
            printf("%d < %d\n", d1, d2);
        } else {
            printf("%d = %d\n", d1, d2);
        }
    
}



return 0;

}
