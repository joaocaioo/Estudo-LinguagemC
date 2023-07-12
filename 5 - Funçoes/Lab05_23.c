/*23. Escreva uma função que gera um triângulo lateral de altura 2*n-1 e n largura. Por exemplo, a saída para n = 4 seria:
*
**
***
****
***
**
*
*/

#include <stdio.h>
#include <stdlib.h>

int trianguloLateral(int n) {
    int i, j;

    int altura = 2 * n - 1;

    for (i = 1; i <= altura; i++) {
        printf("\n");
        if (i <= n) { // imprime a parte crescente do triangulo
            for (j = 1; j <= i; j++) {
                printf("*");
            }
        } else { // imprime a parte decrescente do triangulo
            for (j = 1; j <= altura - i + 1; j++) {
                printf("*");
            }
        }
        
    }
}

int main() {
    int n;

    printf("Digite um numero inteiro\n");
    scanf("%d", &n);

    trianguloLateral(n);

    return 0;
}
