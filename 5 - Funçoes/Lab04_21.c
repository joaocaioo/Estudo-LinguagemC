/*21. Crie uma função que receba como parâmetro um valor inteiro e gere como saída n linhascom pontos de exclamação, conforme o exemplo abaixo (para n = 5):
!
!!
!!!
!!!!
!!!!!*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linhas(int n){

    int i, f;

    for (i = 0; i < n; i++){
            printf("\n");
        for (f = 0; f <= i; f++)
        {
            printf("!");
            
        }
        

        
    }
    
    return 0;

}

int main (void){

    int n;
    
    printf("Digite um numero inteiro\n");
    scanf("%d", &n);

    linhas(n);
    
    return 0;
}