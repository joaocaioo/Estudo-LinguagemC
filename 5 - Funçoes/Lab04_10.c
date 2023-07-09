/*10. Faça uma função que receba dois números e retorne qual deles é o maior.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int comparador(int x, int y){

    if(x > y){

        return x;
    }else if(x < y){

        return y;
    }else{

        printf("Os numeros sao iguais\n");

    }
    
    return x;

}

int main (void){

    int x, y, maior;
    
    printf("Digite um numero\n");
    scanf("%d", &x);
    printf("Digite outro numero\n");
    scanf("%d", &y);


    maior = comparador(x, y);

    printf("O maior numero entre %d e %d e %d", x, y, maior);

    return 0;
}