/*19. Escreva um programa que receba como entrada o valor do saque realizado pelo cliente de um banco e retorne quantas notas de cada valor serão necessárias para atender ao saque com a menor quantidade de notas possível. Serão utilizadas notas de 100, 50, 20, 10, 5, 2 e 1 real.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

int valor, nota100, nota50, nota20, nota10, nota5, nota2, nota1; 

printf("Digite o valor que deseja sacar\n");
scanf("%d", &valor);


while (valor > 0)
{

    if(valor >= 100){

        nota100 = valor / 100;
        valor %= 100;
        printf("%d Notas de 100\n", nota100);

    }else if(valor >= 50){

        nota50 = valor / 50;
        valor %= 50;
        printf("%d Notas de 50\n", nota50);

    }else if(valor >= 20){

        nota20 = valor / 20;
        valor %= 20;
        printf("%d Notas de 20\n", nota20);

    }else if(valor >= 10){

        nota10 = valor / 10;
        valor %= 10;
        printf("%d Notas de 10\n", nota10);

    }else if(valor >= 5){

        nota5 = valor / 5;
        valor %= 5;
        printf("%d Notas de 5\n", nota5);

    }else if(valor >= 2){

        nota2 = valor / 2;
        valor %= 2;
        printf("%d Notas de 2\n", nota2);

    }else if(valor >= 1){

        nota1= valor / 1;
        valor %= 1;
        printf("%d Notas de 1\n", nota1);

    }


}

return 0;

}