/*2. Faça uma função que receba a data atual (dia, mês e ano em inteiro) e exiba-a na tela no formato textual por extenso. Ex.: Data: 18/11/2022, Imprimir: 18 de novembro de 2022.*/

#include <stdio.h>
#include <stdlib.h>

int extenso(int dia, int mes, int ano){

    printf("%02d ", dia);

    switch (mes)
    {
    case 1:
        printf("de janeiro");
        break;
    case 2:
        printf("de fevereiro");
        break;
    case 3:
        printf("de marco");
        break;
    case 4:
        printf("de abril");
        break;
    case 5:
        printf("de maio");
        break;
    case 6:
        printf("de junho");
        break;
    case 7:
        printf("de julho");
        break;
    case 8:
        printf("de agosto");
        break;
    case 9:
        printf("de setembro");
        break;
    case 10:
        printf("de outubro");
        break;
    case 11:
        printf("de novembro");
        break;
    case 12:
        printf("de dezembro");
        break;
    default:
        printf("\nDigite um mes valido!");
        return 0;
    }

    printf(" de %04d", ano);

    return 0;

}

int main (void){

    int dia, mes, ano;

    
    printf("Digite o uma data (dia mes ano)\n");
    scanf("%d %d %d", &dia, &mes, &ano);


    extenso(dia, mes, ano);

    return 0;
}