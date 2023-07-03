/*31. Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a seguir, verifique e mostra qual a classificação dessa pessoa.
    Altura     |                   Peso                          |
               | Até 60 | Entre 60 e 90 (Inclusive)| Acima de 90 |
Menor que 1,20 |   A    |            D             |      G      |
De 1,20 a 1,70 |   B    |            E             |      H      |
Maior que 1,70 |   C    |            F             |      I      |*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){


float peso, altura;

printf("Digite a altura em metros de uma pessoa\n");
scanf("%f", &altura);
printf("Digite o peso dessa pessoa\n");
scanf("%f", &peso);

if(altura < 1.2){
    if(peso < 60){
        printf("Classificacao A\n");
    }else if((peso >= 60) && (peso <= 90)){
        printf("Classificacao D\n");
    }else{
        printf("Classificacao G\n");
    }

}else if((altura >=1.2) && (altura <= 1.7)){
    if(peso < 60){
        printf("Classificacao B\n");
    }else if((peso >=60) && (peso <=90)){
        printf("Classificacao E\n");
    }else{
        printf("Classificacao H\n");
    }
}else if(altura > 1.71){
     if(peso < 60){
        printf("Classificacao C\n");
    }else if((peso >=60) && (peso <=90)){
        printf("Classificacao F\n");
    }else{
        printf("Classificacao I\n");
    }
}

return 0;

}