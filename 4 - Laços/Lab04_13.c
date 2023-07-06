/*13. Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos de 3 ou 5.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

int i, tres, cinco, soma;

 printf("A soma dos numeros naturais abaixo de 1000 que sao multiplos de 3 ou 5 e ");
for (i = 1; i < 1000; i++)
{
    tres = i % 3;
    cinco = i % 5;

    if((tres == 0) || (cinco == 0)){

        soma += i;
        

    }
}

printf("%d", soma);

return 0;

}
