/*24. Escreva uma função que gera um triângulo de altura e lados n e base 2*n-1. Por exemplo, a saída para n = 6 seria: 
      *
     ***
    *****
   *******
  *********
 ************/


#include <stdio.h>
#include <stdlib.h>

int triangulo(int n) {
    int i, j, k;

    int base = 2 * n - 1;
    int espacos = base / 2;

    for (i = 0; i < n; i++) {
        for (j = 0; j < espacos; j++) {
            printf(" ");
        }
        for (k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
        espacos--;
    }
}

int main() {
    int n;

    printf("Digite um numero inteiro\n");
    scanf("%d", &n);

    triangulo(n);

    return 0;
}
