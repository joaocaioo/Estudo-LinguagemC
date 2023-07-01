/*44. Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

float escada, objetivo, degraus;

printf("Digite a altura em cm do degrau de uma escada\n");
scanf("%f", &escada);
printf("Digite a altura em m que o usuario deseja alcancar\n");
scanf("%f", &objetivo);

degraus = (objetivo * 100) / escada ;

printf("Para alcancar uma altura de %.2f metros, sera preciso subir %.0f degraus", objetivo, degraus);

return 0;

}