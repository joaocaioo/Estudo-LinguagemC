/*15. Faça um programa que leia um conjunto não determinado de valores, um de cada vez, e escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize a entrada de dados com um valor negativo ou zero.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float n;

printf("Digite um conjunto de valores, um de cada vez.(para finalizar digite um valor negativo ou zero)\n");


do
{

    printf("Valor: ");
    scanf("%f", &n);
    printf("Quadrado: %.2f\n", pow(n,2));
    printf("Cubo: %.2f\n", pow(n,3));
    printf("Raiz quadrada: %.2f\n", sqrt(n));
    printf("\n\n");

} while (n > 0);

return 0;

}
