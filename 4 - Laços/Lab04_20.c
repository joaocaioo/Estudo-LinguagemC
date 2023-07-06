/*20. Faça um programa que calcule a soma de todos os números primos abaixo de dois milhões.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

int i, soma, dois, tres, cinco, sete; 



for (i = 0; i <= 2000000; i++)
{
    dois = i % 2; 
    tres = i % 3; 
    cinco = i % 5;
    sete = i % 7;

    if((i == 2) || (i ==3) || (i ==5) || (i ==7)){ 

        soma += i; //sabemos que 2, 3, 5 e 7 sao numeros primos (sao divisiveis apenas por eles mesmos e por 1)
        
    }else if (dois == 0 || i < 2){
       //removemos todos os multiplos de 2 e os numeros menores que 2
    }else if (tres == 0){
       //removemos todos os multiplos de 3
    }else if (cinco == 0){
       //removemos todos os multiplos de 5
    }else if (sete == 0){
       //removemos todos os multiplos de 7
    }else{

        soma += i; //adicionamos a soma todos os valores que estao fora da condição
    }
    
}

printf("A soma de todos os numeros primos abaixo de dois milhoes e igual a %d",soma);

return 0;

}