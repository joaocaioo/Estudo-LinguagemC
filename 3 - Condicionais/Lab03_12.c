/*12. Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número inválido”. Se o número for positivo, calcular o logaritmo deste número.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void){


float n;

printf("Digite um numero inteiro positivo\n");
scanf("%f", &n);

if(n >= 0){

    printf("O log de %.1f e igual a ", n);
    float logaritmo = log(n);
    printf("%f", logaritmo);

}else {

    printf("Numero invalido");
    
}

return 0;

}