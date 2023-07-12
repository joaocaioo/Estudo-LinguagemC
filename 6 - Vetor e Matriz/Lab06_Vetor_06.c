/*6. Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos que são primos e suas respectivas posições no vetor.*/


#include <stdio.h>
#include <stdlib.h>


int main() {
    int i;
    int vetor[10];

    for (i = 0; i < 10; i++)
    {
        printf("Digite um valor para a posicao %d\n", i);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if((vetor[i] == 2) || (vetor[i] == 3) || (vetor[i] == 5) || (vetor[i] == 7)){

            printf("Valor: %d  Posicao: %d\n", vetor[i], i);
        }else if((vetor[i] == 1) || (vetor[i] % 2) == 0){

        }else if((vetor[i] % 3) == 0){

        }else if((vetor[i] % 5) == 0){

        }else if((vetor[i] % 7) == 0){

        }else{

            printf("Valor: %d  Posicao: %d\n", vetor[i], i);            
        }
        
    }
    
    
   
    return 0;
}
