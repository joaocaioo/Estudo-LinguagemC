/*3. Leia uma matriz 4 × 4, imprima a matriz e retorne a localização (linha e a coluna) do maior valor.*/


#include <stdio.h>
#include <stdlib.h>


int main() {
    int i, j, maior = 0, maiorLinha, maiorColuna;
    int matriz[4][4];

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("Digite um valor para matriz[%d][%d]\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
        
    }
    
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){

            if(matriz[i][j] > maior){

                maior = matriz[i][j];
                maiorLinha = i;
                maiorColuna = j;
            }
        } 
    }

    printf("O maior valor da matriz esta localizado em matriz[%d][%d]", maiorLinha, maiorColuna);
    
    return 0;
}
