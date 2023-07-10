/*20. Escreva uma função para determinar a quantidade de números primos abaixo de N.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int primos(int n){

    int i, soma = 0;

    for (i = 2; i <= n; i++)
    {
        if((i == 2) || (i == 3) || (i == 5) || (i == 7)){
            soma++;
        }else if((i % 2) == 0){

        }else if((i % 3) == 0){

        }else if((i % 5) == 0){

        }else if((i % 7) == 0){

        }else{
            soma++;
        }
    }
    
    printf("Entre 0 a %d existem %d numeros primos", n, soma);
    return 0;

}

int main (void){

    int n;
    
    printf("Digite um numero inteiro\n");
    scanf("%d", &n);

    primos(n);
    
    return 0;
}