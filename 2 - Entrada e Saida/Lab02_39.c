/*39. A importância de R$780.000,00 será dividida entre três ganhadores de um concurso. Sendo que da quantia total:
- O primeiro ganhador receberá 46%;
- O segundo receberá 32%;
- O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

int premio = 780.000;
float primeiro, segundo, terceiro;

primeiro = premio * 0.46;
segundo = premio * 0.32;
terceiro = premio - (primeiro + segundo);


printf("O primeiro ganhador recebera %.2f, o segundo %.2f e o terceiro %.2f", primeiro, segundo, terceiro);

return 0;

}