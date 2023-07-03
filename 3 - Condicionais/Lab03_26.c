/*26. Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo:
CONSUMO   |(Km/l) |MENSAGEM
menor que |8      |Venda o carro!
entre     |8 e 14 |Econômico!
maior que |14     |Super econômico!*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){


float distancia, litros;

printf("Digite a distancia em Km\n");
scanf("%f", &distancia);
printf("Digite a quantidade de litros de gasolina consumidos por um carro nesse percurso\n");
scanf("%f", &litros);

float km_l = distancia / litros;

if(km_l < 8){
    
    printf("Venda o carro!\nSeu carro faz %.2fKm/l", km_l);

}else if((km_l >= 8) && (km_l <= 14)){

    printf("Economico!\nSeu carro faz %.2fKm/l", km_l);

}else{

    printf("Super economico!\nSeu carro faz %.2fKm/l", km_l);

}
return 0;

}