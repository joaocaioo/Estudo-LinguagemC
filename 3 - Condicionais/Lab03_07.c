/*7. Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números forem iguais, imprima a mensagem: “Números iguais”*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void){

int x, y;


printf("Digite dois numeros:\n");
scanf("%d %d", &x, &y);

if (x == y){

    printf("Numeros iguais");

} else{

    if(x > y){

        printf("O numero %d e maior do que %d", x, y);


    } else {

        printf("O numero %d e maior do que %d", y, x);

    }
}

return 0;

}