/*12. Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número, com exceção dele próprio. Ex.: a soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

int i, n, soma, divisor;

printf("Digite um numero positivo\n");
scanf("%d", &n);


printf("A soma dos divisores do numero %d e ", n);

for (i = 1; i <= n; i++)
{
    divisor = n % i;

    if((divisor == 0) && (i != n)){

        if(i == 1){

        printf("%d", i);
        soma += i;

        }else{

        printf(" + %d", i);
        soma += i;

        }

        
    }else if(i == n){

         printf(" = %d", soma);

    }
}

return 0;

}
