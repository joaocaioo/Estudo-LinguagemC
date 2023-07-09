/*14. Faça uma função que receba a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo:
CONSUMO   |(Km/l) |MENSAGEM
menor que |8      |Venda o carro!
entre     |8 e 14 |Econômico!
maior     |que 14 |Super econômico!*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int consumo(float km, float l){

    float km_l = km / l;

    printf("O carro faz %.2f Km/l!\n", km_l);

    if(km_l < 8){

        printf("Venda o carro!");

    }else if(km_l > 8 && km_l < 14){

        printf("Economico!");

    }else{
        
        printf("Super economico!");
    }

    return 0;
}

int main (void){

    float km, l;
    
    printf("Digite uma distancia em km\n");
    scanf("%f", &km);
    printf("Digite a quantida de litros consumidos neste percurso\n");
    scanf("%f", &l);

    consumo(km, l);


    return 0;
}