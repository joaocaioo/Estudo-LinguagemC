/*22. Faça um programa que calcule o maior número palíndromo feito a partir do produto de dois números de 3 dígitos. Ex.: O maior palíndromo feito a partir do produto de dois números de dois dígitos é 9009 = 91*99.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void){

int a, b, produto, palindromo = 0;
int aMaior, bMaior;

for(a = 100; a <= 999; a++){  // loop para percorrer do 100 ao 999 
    for (b = 100; b <= 999; b++){
        
        produto = a * b; 

        int aux = produto;
        int inverso = 0;
        while (produto != 0) { // inverte o produto
                inverso = inverso * 10 + produto % 10;
                produto = produto / 10;
        }

            
        if ((aux == inverso) && aux > palindromo) { //verifica se o produto é um palindromo e se foi o maior encontrado
            palindromo = aux;
            aMaior = a;
            bMaior = b;
            }
        }
    }

    printf("O maior palindromo feito a partir do produto de dois numeros de tres digitos e %d = %d * %d\n", palindromo, aMaior, bMaior);

    return 0;
}

    
