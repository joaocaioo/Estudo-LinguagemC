/*33. Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule e escreva o preço novo, e escreva uma mensagem em função do preço novo (de acordo com a segunda tabela).
PREÇO ANTIGO         | PERCENTUAL DE AUMENTO
até R$ 50            | 5%
entre R$ 50 e R$ 100 | 10%
acima de R$ 100      | 15%
_______________________________________________

PREÇO NOVO                        | MENSAGEM
até R$ 80                         |Barato
entre R$ 80 e R$ 120 (inclusive)  | Normal
entre R$ 120 e R$ 200 (inclusive) |Caro
acima de R$ 200                   |Muito caro*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){


float preco, novo;

printf("Digite o preco antigo do produto\n");
scanf("%f", &preco);

if(preco < 50){

    novo = preco + (preco * 0.05);

}else if((preco >= 50) && (preco <= 100)){

    novo = preco + (preco * 0.1);

}else if(preco > 100){

    novo = preco + (preco * 0.15);
}

if(novo < 80){

    printf("Preco antigo: R$%.2f\nPreco novo: R$%.2f\nMENSAGEM : Barato!", preco, novo);

}else if((novo >= 80) && (novo <= 120)){

    printf("Preco antigo: R$%.2f\nPreco novo: R$%.2f\nMENSAGEM : Normal!", preco, novo);

}else if((novo >= 120) && (novo <= 200)){

    printf("Preco antigo: R$%.2f\nPreco novo: R$%.2f\nMENSAGEM : Caro!", preco, novo);

}else if(novo > 200){

     printf("Preco antigo: R$%.2f\nPreco novo: R$%.2f\nMENSAGEM : Muito caro!", preco, novo);
}


return 0;

}