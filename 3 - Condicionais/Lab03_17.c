/*17. Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
𝐴 =(basemaior + basemenor) ∗ altura / 2
Lembre-se a base maior e a base menor devem ser números maiores que zero.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float maior, menor, altura;

printf("Digite o valor da base maior\n");
scanf("%f", &maior);
printf("Digite o valor da base menor\n");
scanf("%f", &menor);
printf("Digite o valor da altura\n");
scanf("%f", &altura);

float area = ((maior + menor) * altura) / 2;

if(maior > 0 && menor > 0){

    printf("A area do trapezio e igual a %.2f", area);

}

return 0;

}