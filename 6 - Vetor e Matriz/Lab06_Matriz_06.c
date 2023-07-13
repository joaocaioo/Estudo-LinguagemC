/*6. Gere matriz 4 × 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos acima da diagonal principal. Imprima a matriz original e a matriz transformada.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int i, j;
    int matriz[4][4];

    printf("Digite valores no intervalo de 1 a 20\n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){

            printf("Digite um valor para matriz[%d][%d]\n", i, j);
            scanf("%d", &matriz[i][j]);
            if((matriz[i][j] < 1) || (matriz[i][j] > 20)){
                printf("Valor invalido!\n");
                j--;
            }

        }
    }

    for (i = 0; i < 4; i++){ //Matriz original
        printf("\n");
        for (j = 0; j < 4; j++){

            printf("%02d ", matriz[i][j]);

        }

    }
    
    printf("\n\n");


    for (i = 0; i < 4; i++){ //Matriz triangular inferior
        printf("\n");
        for (j = 0; j < 4; j++){
            if (i >= j){
                printf("%02d ", matriz[i][j]);
            }else if(i < j){
                matriz[i][j] = 0;
                printf("%02d ", matriz[i][j]);
            }

        }

    }
    
    
    return 0;
}
