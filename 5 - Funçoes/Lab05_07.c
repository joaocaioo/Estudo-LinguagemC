/*7. Faça uma função que receba uma temperatura em graus Celsius e retorne-a convertida em graus Fahrenheit. A fórmula de conversão é: 
𝐹 = 𝐶 ∗ (9,0 / 5,0) + 32,0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fahrenheit(float c){

    float f = c * (9.0 / 5.0) + 32; 
    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit\n", c, f);
    return 0;

}

int main (void){

    float c;
    
    printf("Digite uma uma temperatura em graus Celsius\n");
    scanf("%f", &c);


   fahrenheit(c);

    return 0;
}