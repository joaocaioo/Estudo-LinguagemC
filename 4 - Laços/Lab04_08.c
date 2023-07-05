/*8. Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.*/

#include <stdio.h>
#include <stdlib.h>


int main(void){


int i, a, n, maior = 0, menor;

int c = 0;


for (i = 1; i <= 10; i++)
{
    
    printf("Digite um valor\n");
    scanf("%d", &a);

    n = a;

    if(a < c){

        if(a < menor){ // comparar se o valor digitado é menor do que o menor numero armazenado anteriormente
        menor = a; // armazena o menor valor
        c = n; // controlador para armazenar o valor lido no loop anterior para que ele possa ser comparado com o proximo valor lido
        }else{
            c = n;
        }
        

    }else if(a > c){

        if(a > maior){ // comparar se o valor digitado é maior do que o maior numero armazenado anteriormente
        maior = a; // armazena o maior valor
        c = n; // controlador para armazenar o valor lido no loop anterior para que ele possa ser comparado com o proximo valor lido
        }else{
            c = n;
        }
    }


}

printf("O menor valor entre os 10 e: %d\nO maior valor entre os 10 e: %d", menor, maior);


return 0;

}


