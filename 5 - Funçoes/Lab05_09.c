/*9. Faça uma função que receba a altura e o raio de um cilindro circular e retorne o volume do cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: 𝑉 = PI * raio² * altura, onde PI = 3.141592.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592

int volumeCilindro(int a, int r){

    float volume = PI * pow(r, 2) * a; 
    printf("O volume desse cilindro e de %.2fcm cubicos", volume);
    return 0;

}

int main (void){

    int a, r;
    
    printf("Digite a altura de um cilindro\n");
    scanf("%d", &a);
    printf("Digite o raio desse cilindro\n");
    scanf("%d", &r);


   volumeCilindro(a, r);

    return 0;
}