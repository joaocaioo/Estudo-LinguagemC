/*4. Leia uma matriz 5 × 5. Leia também um valor X. O programa deverá fazer uma busca desse valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.*/


#include <stdio.h>
#include <stdlib.h>


int main() {
    int i, j, x;
    int matriz[5][5];

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("Digite um valor para matriz[%d][%d]\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Digite um valor para localiza-lo na matriz\n");
    scanf("%d", &x);

    int encontrado = 0; // Indica se o valor foi encontrado no vetor
    printf("\n\n");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){

            if(matriz[i][j] == x){

                printf("O valor %d esta localizado em matriz[%d][%d]\n", x, i, j);
                encontrado = 1; // 1 indica que o valor foi encontrado
            }
        } 
    }

    if(encontrado == 0){

     printf("O valor %d nao foi encontrado na matriz\n", x);   
    }

    
    return 0;
}
