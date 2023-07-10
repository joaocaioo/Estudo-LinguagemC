/*19. Faça uma função que receba um número inteiro positivo n e calcule o seu fatorial, n!.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fatorial(int n){

    if(n == 1){
        return 1;
    }else{
        return n * fatorial(n -1);
    }


}

int main (void){

    int n, z;
    
    printf("Digite um numero inteiro positivo\n");
    scanf("%d", &n);

    if(n > 0){
        z = fatorial(n);
        printf("%d! = %d", n ,z);
    }else{

        printf("Numero invalido, degite um numero positivo\n");
    }
    
    return 0;
}