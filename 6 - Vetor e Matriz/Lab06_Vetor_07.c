/*7. Faça um programa que receba 6 números inteiros e mostre:
- Os números pares digitados;
- A soma dos números pares digitados;
- Os números ímpares digitados;
- A quantidade de números ímpares digitados;*/


#include <stdio.h>
#include <stdio.h>


int main() {
    int i, somaPar, somaImpar = 0;
    int vetor[6];

    for (i = 0; i < 6; i++)
    {
        printf("Digite um valor para a posicao %d\n", i);
        scanf("%d", &vetor[i]);
    }

    printf("Valores pares no vetor: ");
    for (i = 0; i < 6; i++)
    {
        if((vetor[i] % 2) == 0){

            printf("%d ", vetor[i]);
            somaPar+=vetor[i];
        }
    }
    printf("\nSoma dos valores pares do vetor: %d", somaPar);

    printf("\n\n");

    printf("Valores impares no vetor: ");
    for (i = 0; i < 6; i++)
    {
        if(!((vetor[i] % 2) == 0)){

            printf("%d ", vetor[i]);
            somaImpar++;
        }
    }
    printf("\nQuantidade de valores impares no vetor: %d", somaImpar);
   
    return 0;
}
