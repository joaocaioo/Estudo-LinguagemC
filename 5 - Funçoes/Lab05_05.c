/*5. Faça uma função e um programa de teste para o cálculo do volume de uma esfera. Sendo que o raio é passado por parâmetro.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

int volumeEsfera(int r){

    float volume =(4 * PI * pow(r,3) / 3);
    printf("O volume da esfera de raio %d equivale a %.2fcm cubicos\n", r, volume);
    return 0;

}

int main (void){

    int r;

    
    printf("Digite o raio de uma esfera\n");
    scanf("%d", &r);


   volumeEsfera(r);

    return 0;
}