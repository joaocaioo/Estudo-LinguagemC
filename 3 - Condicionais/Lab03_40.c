/*40. O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão do distribuidor, e dos impostos. A comissão e os impostos são calculados sobre o custo de fábrica, de acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao consumidor.
CUSTO DE FÁBRICA                | % DO DISTRIBUIDOR | % DOS IMPOSTOS
até R$12.000,00                 |5                  |isento
entre R$12.000,00 e R$25.000,00 |10                 |15
acima de R$25.000,00            |15                 |20*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float fabrica, cosumidor;

printf("Digite o custo de fabrica\n");
scanf("%f", &fabrica);

if(fabrica < 12000.00){

    cosumidor = fabrica + (fabrica * 0.05);
    printf("Isento de impostos\n");
    printf("O custo ao consumidor de um carro novo e R$%.2f\n", cosumidor);

}else if(fabrica >= 12000.00 && fabrica <= 25000.00){

    cosumidor = fabrica + (fabrica * 0.10) + (fabrica * 0.15); // custo de fabrica + comissao + impostos
    printf("O custo ao consumidor de um carro novo e R$%.2f\n", cosumidor);

}else if(fabrica > 25000.00){

    cosumidor = fabrica + (fabrica * 0.15) + (fabrica * 0.20); // custo de fabrica + comissao + impostos
    printf("O custo ao consumidor de um carro novo e R$%.2f\n", cosumidor);

}

return 0;

}