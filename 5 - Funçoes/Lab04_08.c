/*8. Sejam a e b os catetos de um triangulo, onde a hipotenusa é obtida pela equação: hipotenusa = √𝑎² + 𝑏². Faça uma função que receba os valores de a e b e calcule o valor da hipotenusa através da equação.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int hipotenusa(int a, int b){

    int hip = sqrt(pow(a, 2) + pow(b, 2)); 
    printf("A hipotenusa de um triangulo equivale a %d", hip);
    return 0;

}

int main (void){

    int a, b;
    
    printf("Digite os dois catetos de um triangulo\n");
    scanf("%d %d", &a, &b);


   hipotenusa(a, b);

    return 0;
}