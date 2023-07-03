/*35. Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e se o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em anos não bissextos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){


int dia, mes, ano;

printf("Digite uma data: dia mes ano\n");
scanf("%d %d %d", &dia, &mes, &ano);

int bissexto = (ano % 400) && (ano % 4);
int naoBissexto = ano % 100; 

if((mes >= 1) || (mes <= 12)){

    if((mes ==2) && (bissexto == 0) && (naoBissexto != 0)){
        if(dia >29){

            printf("O mes de fevereiro em ano bissexto possui apenas 29 dias");

        }else{

            printf("A data e valida!");

        }

        

    }else if((mes ==2)){
        if(dia >28){

            printf("O mes de fevereiro em ano nao bissexto possui apenas 28 dias");

        }else{

            printf("A data e valida!");

        }

        

    }else if((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 9) || (mes == 11)){
        if(dia >=32){

            printf("O mes %d possui apenas 31 dias", mes);
        }else{

            printf("A data e valida!");

        }

    }else if((mes == 4) || (mes == 6) || (mes == 8) || (mes == 10) || (mes == 12)){
        if(dia >=31){

            printf("O mes %d possui apenas 30 dias", mes);
        }else{

            printf("A data e valida!");

        }
    
}else{

    printf("Mes invalido");

}

}


return 0;

}