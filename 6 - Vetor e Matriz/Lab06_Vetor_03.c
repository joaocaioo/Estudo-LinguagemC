/*3. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa.*/


#include <stdio.h>
#include <stdio.h>


int main() {
    int i;
    int original[6], invertido[6];

    for (i = 0; i < 6; i++)
    {
        printf("Digite um valor para a posicao %d\n", i);
        scanf("%d", &original[i]);
    }

    printf("Vetor invertido:\n");
    for (i = 0; i < 6; i++)
    {
       
       invertido[i] = original[5 - i];
       printf("%d ", invertido[i]);
    }

    
    

    return 0;
}
