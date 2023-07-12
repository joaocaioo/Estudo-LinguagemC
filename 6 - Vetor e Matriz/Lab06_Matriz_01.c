/*1. Leia uma matriz 4 × 4, conte e escreva quantos valores maiores que 10 ela possui.*/


#include <stdio.h>
#include <stdlib.h>


int main() {
    int i, j, soma = 0;
    int matriz[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++)
        {
            if(matriz[i][j] >= 10){

                soma++;
            }
        }
        
    }
    
    printf("A matriz possui %d valores maiores que 10", soma);
    
    return 0;
}
