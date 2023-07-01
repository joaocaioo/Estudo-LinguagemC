/*11. Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 + 1). Se o número lido não for maior do que zero, o programa terminará com a mensagem:“Número inválido”.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void){


int n, digito1, digito2, digito3;

printf("Digite um numero inteiro maior do que zero(1 a 999)\n");
scanf("%d", &n);

if((n >= 0) && (n <= 999)){

    digito3 = n % 10;
    digito2 = (n / 10) % 10;
    digito1 = n / 100;

    int soma = digito1 +digito2 + digito3;

    printf("o numero %d correspondera ao valor %d (%d  + %d  + %d )", n, soma, digito1, digito2, digito3);

}else {

    printf("Numero invalido");
    
}

return 0;

}