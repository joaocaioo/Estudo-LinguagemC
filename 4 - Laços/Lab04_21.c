/*21. Faça um programa que conte quantos números primos existentes entre a e b, onde a e b são números informados pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

int i, a, b, soma, dois, tres, cinco, sete; 

printf("Digite um numero a\n");
scanf("%d", &a);
printf("Digite um numero b\n");
scanf("%d", &b);

for (i = a; i <= b; i++)
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

printf("A soma dos numeros primos de %d a %d e igual a %d", a, b, soma);

return 0;

}