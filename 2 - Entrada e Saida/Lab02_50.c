/*50. Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

int idade, ano, nascimento;

printf("Digite a idade atual de alguem\n");
scanf("%d", &idade);
printf("Digite o ano atual\n");
scanf("%d", &ano);

nascimento = ano - idade;

printf("Uma pessoa com %d anos de idade nasceu em %04d", idade, nascimento);

return 0;

}