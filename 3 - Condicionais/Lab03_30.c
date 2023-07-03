/*30. Faça um programa que receba três números e mostre-os em ordem crescente.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){


int x, y, z, num1, num2, num3;

printf("Digite tres numeros\n");
scanf("%d %d %d", &x, &y, &z);

if((x > y) && (x > z)){

    num3 = x;

    if(y > z){

        num2 = y;
        num1 = z;

    }else{

        num1 = y;
        num2 = z;

    }

}else if((y > x) && (y > z)){

    num3 = y;

    if(x > z){

        num2 = x;
        num1 = z;

    }else{

        num1 = x;
        num2 = z;

    }

}else if((z > x) && (z > y)){

    num3 = z;

    if(x > y){

        num2 = x;
        num1 = y;

    }else{

        num1 = x;
        num2 = y;

    }

}

printf("A ordem crescente fica %d %d %d", num1, num2, num3);

return 0;

}
