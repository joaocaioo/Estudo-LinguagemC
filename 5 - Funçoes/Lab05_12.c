/*12. Escreva uma função que receba um número inteiro maior do que zero e retorne a soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 + 1).*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int soma(int n){

    int i, s = 0, digitos;

    printf("A soma dos algorismos do numero %d", n);

    for (i = 0;n != 0; i++)
    {
        digitos = n % 10;
        n /= 10;

        s += digitos;
       
    }
    
    printf(" corresponde ao valor %d\n", s);
    
    return 0;

}


int main (void){

    int n;
    
    printf("Digite um numero inteiro\n");
    scanf("%d", &n);
   
    if(n > 0){

        soma(n);

    }else{

        printf("Numero invalido!");

    }

    return 0;
}