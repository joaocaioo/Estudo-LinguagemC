/*1. Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. 
O programa deve executar os seguintes passos:
a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
b) Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
d) Mostre na tela cada valor do vetor A, um em cada linha.*/


#include <stdio.h>
#include <stdlib.h>


int main() {
    int i;
    int A[6] = {1, 0, 5, -2, -5, 7};

    int soma = A[0] + A[1] + A[5];
    
    printf("A soma dos valores equivale a %d\n", soma);

    for (i = 0; i < 6; i++) //percorre o vetor e muda o valor da posição 4 para 100
    {
      A[4] = 100;
    }
    

    for (i = 0; i < 6; i++) // percorre o vetor imprimendo sua posição e seu valor
    {
       printf("Posicao: %d  Valor: %d\n", i, A[i]);
    }
    


    return 0;
}
