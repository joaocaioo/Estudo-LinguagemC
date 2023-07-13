/*8. Faça um programa que leia duas matrizes 2 × 2 com valores reais. Ofereça ao usuário um menu de opções:
a) somar as duas matrizes
b) subtrair a primeira matriz da segunda
c) adicionar uma constante às duas matrizes
d) imprimir as matrizes*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int main() {

    const int TAM = 50;
    char op;
    int i, j;
    int matrizA[2][2] = {{1,2},{3,4}}, matrizB[2][2] = {{5,6},{7,8}}, matrizSoma[2][2], matrizSub[2][2];

    printf("Menu\n");
    printf("a) somar as duas matrizes\n");
    printf("b) subtrair a primeira matriz da segunda\n");
    printf("c) adicionar uma constante às duas matrizes\n");
    printf("d) imprimir as matrizes\n");
    scanf(" %c", &op);

    switch (op)
    {
    case 'a':

        printf("Soma");
        for (i = 0; i < 2; i++) {
            printf("\n");
            for (j = 0; j < 2; j++) {
                matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
                printf("%02d ", matrizSoma[i][j]);
            }
        }
        break;
    case 'b':

        printf("Subtracao\n");
        for (i = 0; i < 2; i++) {
            printf("\n");
            for (j = 0; j < 2; j++) {
                matrizSub[i][j] = matrizA[i][j] - matrizB[i][j];
                printf("%02d ", matrizSub[i][j]);
            }
        }
        break;
    case 'c':
        
        printf("\n");
        printf("Matriz A");
    for (i = 0; i < 2; i++) {
        printf("\n");
        for (j = 0; j < 2; j++) {
            matrizA[i][j] = TAM;
            printf("%02d ", matrizA[i][j]);
        }
    }

    printf("\n");
    printf("Matriz B");
    for (i = 0; i < 2; i++) {
        printf("\n");
        for (j = 0; j < 2; j++) {
            matrizB[i][j] = TAM;
            printf("%02d ", matrizB[i][j]);
        }
    }
        break;
    case 'd':

        printf("\n");
        printf("Matriz A");
    for (i = 0; i < 2; i++) {
        printf("\n");
        for (j = 0; j < 2; j++) {
            printf("%02d ", matrizA[i][j]);
        }
    }

    printf("\n");
    printf("Matriz B");
    for (i = 0; i < 2; i++) {
        printf("\n");
        for (j = 0; j < 2; j++) {
            printf("%02d ", matrizB[i][j]);
        }
    }
        break;
    
    default:
         printf("Opcao invalida\n");
        break;
    }



    return 0;
}