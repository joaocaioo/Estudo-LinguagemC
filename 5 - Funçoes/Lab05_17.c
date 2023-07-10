/*17. Faça uma função que receba dois números inteiros positivos por parâmetro e retorne a soma dos N números inteiros existentes entre eles.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int somaN(int x, int y){

    int i, soma = 0;

    printf("Soma dos N numeros inteiros existentes entre %d a %d\n", x, y);

    for (i = x + 1; i < y; i++)
    {   

        if(i == y-1){

            printf("%d = ", i);
            soma += i;

        }else{

            printf("%d + ", i);
            soma += i;

        }
        
    }
    
    
    printf("%d\n", soma);
    return 0;
}

int main (void){

    int x, y;
    
    printf("Digite dois numeros inteiros positivos\n");
    scanf("%d %d", &x, &y);

    if((x > 0) && (y > 0)){
    somaN(x, y);
    }else{

        printf("Digite numeros positivos!");
    }

    return 0;
}