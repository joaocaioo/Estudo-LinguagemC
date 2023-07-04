/*37. As tarifas de certo parque de estacionamento são as seguintes:
- 1a e 2a hora - R$1,00 cada;
- 3a e 4a hora - R$1,40 cada;
- 5a hora e seguintes - R$2,00 cada
O número de horas a pagar é sempre inteiro e arredondado por excesso. Deste modo, quem estacionar durante 61 minutos pagará por duas horas, que é o mesmo que pagaria se tivesse permanecido 120 minutos. Os momentos de chegada ao parque e partida deste são apresentados na forma de pares de inteiros, representando horas e minutos. Por exemplo, o par 12 50 representará “dez para a uma da tarde”. Pretende-se criar um programa que, lidos pelo teclado os momentos de chegada e de partida, escreva na tela o preço cobrado pelo estacionamento. Admite-se que a chegada e a partida se dão com intervalo não superior a 24 horas. Portanto, se uma dada hora de chegada for superior à da partida, isso não é uma situação de erro, antes significará que a partida ocorreu no dia seguinte ao da chegada.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

int horasC, minutosC, horasP, minutosP, horas_Estacionado, minutos_Estacionado;
float preco;

printf("Digite o momento da chegada (hora minuto)\n");
scanf("%d %d", &horasC, &minutosC);
printf("Digite o momento da partida (hora minuto)\n");
scanf("%d  %d", &horasP, &minutosP);

horasC = (horasC * 60) + minutosC; //converte hora em minutos e soma com os minutos restantes
horasP = (horasP * 60) + minutosP;

horas_Estacionado = horasP - horasC;
horas_Estacionado /= 60;
if(horas_Estacionado < 0){

    horas_Estacionado =  24 + horas_Estacionado;
}

minutos_Estacionado = minutosP - minutosC ;
if(minutos_Estacionado < 0){

    minutos_Estacionado = - (minutos_Estacionado);

}

minutos_Estacionado = 60 - minutos_Estacionado;


if(minutos_Estacionado == 60){
    
    horas_Estacionado += 1;
    minutos_Estacionado = 0;
}

if(((horas_Estacionado >= 1) && (horas_Estacionado <= 2))){

     preco = horas_Estacionado * 1.00;

     if(minutos_Estacionado <= 60){

        preco += 1.00;

     }

}else if((horas_Estacionado >= 3) && (horas_Estacionado <= 4)){

    
     preco = horas_Estacionado * 1.40;

     if(minutos_Estacionado <= 60){

        preco += 1.40;
        
     }

}else if(horas_Estacionado >= 5){

    preco = horas_Estacionado * 2.00;

    if(minutos_Estacionado <= 60){

        preco += 2.00;
        
     }

}

printf("Tempo estacionado: %02d:%02d\nValor: R$%.2f", horas_Estacionado, minutos_Estacionado, preco);


return 0;

}