/*4. Faça uma função para verificar se um número é um quadrado perfeito. Um quadrado perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de outro número inteiro. Ex.: 1, 4, 9...*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int quadradoPerfeito(int n){

double raiz = sqrt(n);

    if(n > 0 && (raiz == round(raiz))){

        printf("O valor %d e um quadrado perfeito", n);
        return 1;

    }else{

        printf("O valor %d nao e um quadrado perfeito", n);
        return 0;
    }
    

}

int main (void){

    int n;

    
    printf("Digite um numero\n");
    scanf("%d", &n);


   quadradoPerfeito(n);

    return 0;
}