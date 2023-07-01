/*29. Leia quatro notas, calcule a média aritmética e imprima o resultado.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

float n1, n2, n3, n4, media;

printf("Digite a primeira nota\n");
scanf("%f", &n1);
printf("Digite a segunda nota\n");
scanf("%f", &n2);
printf("Digite a terceira nota\n");
scanf("%f", &n3);
printf("Digite a quarta nota\n");
scanf("%f", &n4);

media = (n1 + n2 + n3 + n4) / 4; 

printf("A a media aritmetica das quatro notas e igual a %.2f", media);

return 0;

}