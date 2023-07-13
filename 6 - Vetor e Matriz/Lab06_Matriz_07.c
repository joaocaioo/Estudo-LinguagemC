/*7. Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela debingo. Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de modo a não ter números repetidos dentro das cartelas. O programa deve exibir na tela a cartela gerada.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int main() {
    int i, j;
    int matriz[5][5];
    int numeros[100] = {0}; // Vetor para controlar os números já sorteados

    srand(time(NULL));

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            int numero;
            int repetido;

            do {
                numero = rand() % 100;
                repetido = 0;

                if (numeros[numero] == 1) { // Verifica se o número já foi sorteado anteriormente
                    repetido = 1;
                } else {
                    numeros[numero] = 1;
                }
            } while (repetido);

            matriz[i][j] = numero;
        }
    }

    
    for (i = 0; i < 5; i++) {
        printf("\n");
        for (j = 0; j < 5; j++) {
            printf("%02d ", matriz[i][j]);
        }
    }

    printf("\n");

    return 0;
}