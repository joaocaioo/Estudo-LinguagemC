/*53. Faça um programa para ler as dimensões de um terreno (comprimento c e largura l), bem como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno com tela.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float c, l, p, custo;

printf("Digite o comprimento em metro do terreno\n");
scanf("%f", &c);
printf("Digite a largura em metro do terreno\n");
scanf("%f", &l);
printf("Digite o preco em reais do metro de tela\n");
scanf("%f", &p);

float perimetro = 2 * c + 2 * l;

custo = perimetro * p;

printf("O preco para cercar com tela um terreno com %.2f de comprimento e %.2f de largura e igual a R$%.2f ", c, l, custo);

return 0;

}