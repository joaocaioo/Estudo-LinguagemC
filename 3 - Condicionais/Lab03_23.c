/*23. Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se for divisível por 400 ou se for divisível por 4 e não for divisível por 100. Por exemplo: 1988, 1992, 1996.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

int ano;


printf("Digite um ano\n");
scanf("%d", &ano);

int bissexto = (ano % 400) && (ano % 4);
int naoBissexto = ano % 100; 

if((bissexto == 0) && (naoBissexto != 0)){

    printf("%04d e um ano bissexto", ano);

}else{

    printf("%04d nao e um ano bissexto", ano);

}

return 0;

}