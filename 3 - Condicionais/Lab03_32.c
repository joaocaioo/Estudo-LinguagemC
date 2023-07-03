/*32. Escrever um programa que leia o código do produto escolhido do cardápio de uma lanchonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado um pedido. O cardápio da lanchonete segue o padrão abaixo:
Especificação  |Código |Preço
Cachorro Quente|100    |1,20
Bauru Simples  |101    |1,30
Bauru com Ovo  |102    |1,50
Hambúrguer     |103    |1,20
Cheeseburguer  |104    |1,70
Suco           |105    |2,20
Refrigerante   |106    |1,00*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){


int codigo, quantidade;
float preco;

printf("Especificacao  |Codigo |Preco\n");
printf("Cachorro Quente|100    |1,20\n");
printf("Bauru Simples  |101    |1,30\n");
printf("Bauru com Ovo  |102    |1,50\n");
printf("Hamburguer     |103    |1,20\n");
printf("Cheeseburguer  |104    |1,70\n");
printf("Suco           |105    |2,20\n");
printf("Refrigerante   |106    |1,00\n");

printf("Digite o codigo do seu produto\n");
scanf("%d", &codigo);
printf("Digite a quantidade\n");
scanf("%d", &quantidade);

switch (codigo)
{
case 100:
    preco = quantidade * 1.20;
    printf("%d Cachorro quente vao ficar R$%.2f\n", quantidade, preco);
    break;
case 101:
    preco = quantidade * 1.30;
    printf("%d Baurus simples vao ficar R$%.2f\n", quantidade, preco);
    break;
case 102:
    preco = quantidade * 1.50;
    printf("%d Baurus com ovo vao ficar R$%.2f\n", quantidade, preco);
    break;
case 103:
    preco = quantidade * 1.20;
    printf("%d Hamburgueres vao ficar R$%.2f\n", quantidade, preco);
    break;
case 104:
    preco = quantidade * 1.70;
    printf("%d Cheeseburguers vao ficar R$%.2f\n", quantidade, preco);
    break;
case 105:
    preco = quantidade * 2.20;
    printf("%d Sucos vao ficar R$%.2f\n", quantidade, preco);
    break;
case 106:
    preco = quantidade * 1.00;
    printf("%d Refrigerantes vao ficar R$%.2f\n", quantidade, preco);
    break;

default:
    break;
}


return 0;

}