/*5. Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i+5*i)%(i+1), sendo i a posição do elemento no vetor. Em seguida imprima o vetor na tela.*/


#include <stdio.h>
#include <stdlib.h>


int main() {
    int i;
    int vetor[50];

    for (i = 0; i < 50; i++)
    {
        vetor[i] = (i + 5 * i) % (i + 1);
    }

    printf("Vetor gerado:\n");
    for (i = 0; i < 50; i++)
    {
        printf("%d ", vetor[i]);
    }
    
    

    return 0;
}
