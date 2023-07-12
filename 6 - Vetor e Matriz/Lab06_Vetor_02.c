/*2. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.*/


#include <stdio.h>
#include <stdlib.h>


int main() {
    int i, x, y, soma;
    int A[8];

    for (i = 0; i < 8; i++)
    {
        printf("Digite um valor para a posicao %d\n", i);
        scanf("%d", &A[i]);
    }

    printf("Escolha uma posicao do vetor\n");
    scanf("%d", &x);
    printf("Escolha uma outra posicao do vetor\n");
    scanf("%d", &y);

    if(x < 8 && y < 8){

        for (i = 0; i < 8; i++){

        soma = A[x] + A[y];
       
        }

        printf("A soma de %d + %d e igual a %d", A[x], A[y], soma);

    }else{

        printf("Posicao invalida!");

    }

    return 0;
}
