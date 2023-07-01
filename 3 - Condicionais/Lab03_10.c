/*10. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
- Homens: (72,7 * h) – 58,0
- Mulheres: (62,1 * h) – 44,7.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void){

char sexo;
float altura, homem, mulher;

printf("Digite o sexo dessa pessoa(H ou M)\n");
scanf("%c", &sexo);
printf("Digite a altura em m de uma pessoa\n");
scanf("%f", &altura);

homem = (72.7 * altura) - 58.0;
mulher = (62.1 * altura) - 44.7;

if(sexo == 'H'){

    printf("O peso ideal de um homem com %.2fm de altura e de %.2f", altura, homem);

}else {

    printf("O peso ideal de uma mulher com %.2fm de altura e de %.2f", altura, mulher);
    
}

return 0;

}