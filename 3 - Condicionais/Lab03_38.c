/*38. Leia uma data de nascimento de uma pessoa fornecida através de três números inteiros: Dia, Mês e Ano. Teste a validade desta data para saber se está é uma data válida. Teste se o dia fornecido é um dia válido: dia > 0, dia <= 28 para o mês de fevereiro (29 se o ano for bissexto), dia <= 30 em abril, junho, setembro e novembro, dia <= 31 nos outros meses. Teste a validade do mês: mês > 0 e mês < 13. Teste a validade do ano: ano <= ano atual (use uma constante definida com o valor igual a 2022). Imprimir: “data válida” ou “data inválida” no final da execução do programa.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

int dia, mes, ano;

printf("Digite uma data de nascimento de uma pessoa (dia mes ano)\n");
scanf("%d %d %d", &dia, &mes, &ano);

int bissexto = (ano % 400) && (ano % 4);
int naoBissexto = ano % 100; 

if(ano <= 2023){
    if(mes > 0 && mes < 13){
        if((mes == 2) && (bissexto == 0) && (naoBissexto != 0)){

            if(dia > 29){

                printf("Dia invalido, fevereiro possui 29 dias em um ano bissexto!");
            }else{

            printf("A data e valida!");

        }

        }else if(mes == 2){

            if(dia > 28){

                printf("Dia invalido, fevereiro possui 28 dias em um ano nao bissexto!");
            }else{

            printf("A data e valida!");

        }

        }else if((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 9) || (mes == 11)){

            if(dia > 31){

                printf("Dia invalido, o mes %d possui 31 dias!", mes);
            }else{

            printf("A data e valida!");

        }

        }else if((mes == 4) || (mes == 6) || (mes == 8) || (mes == 10) || (mes == 12)){

            if(dia > 30){

                printf("Dia invalido, o mes %d possui 30 dias!", mes);
            }else{

            printf("A data e valida!");

            }
        }else{

        printf("Mes invalido!");
        
    }
}else{

    printf("Ano invalido!");

}

return 0;

    }
}