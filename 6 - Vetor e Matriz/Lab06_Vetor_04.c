/*4. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o maior e o menor valor.*/


#include <stdio.h>
#include <stdlib.h>


int main() {
    int i;
    int vetor[5], maior = 0, menor = 0, posicaoMenor, posicaoMaior;

    for (i = 0; i < 5; i++)
    {
        printf("Digite um valor para a posicao %d\n", i);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (vetor[i] > maior){
            if(menor == 0){
                menor = vetor[i];
                posicaoMenor = i;
            }
            maior = vetor[i];
            posicaoMaior = i;
        }else if(vetor[i] < maior){
            if(menor == 0){
                menor = vetor[i];
                posicaoMenor = i;
            }if(vetor[i] < menor){
                menor = vetor[i];
                posicaoMenor = i;
            }
        }
    }
    
    printf("Maior valor: %d  Posicao: %d\nMenor valor: %d  Posicao: %d", maior, posicaoMaior, menor, posicaoMenor);

    return 0;
}
