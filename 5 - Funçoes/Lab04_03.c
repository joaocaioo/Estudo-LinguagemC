/*3. Faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor de retorno será 1 se positivo, -1 se negativo e 0 se for igual a 0.*/

#include <stdio.h>
#include <stdlib.h>

int verifica(int n){

    if(n > 0){

        printf("O valor %d e positivo", n);
        return 1;

    }else if (n < 0)
    {
        printf("O valor %d e negativo", n);
        return -1;

    }else{

        printf("O valor %d e neutro", n);
        return 0;
    }
    

}

int main (void){

    int n;

    
    printf("Digite um numero\n");
    scanf("%d", &n);


   verifica(n);

    return 0;
}