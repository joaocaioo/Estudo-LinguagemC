/*16. Faça um programa que apresente um menu de opções para o cálculo das seguintes operações entre dois números:
- Adição (opção 1)
- Subtração (opção 2)
- Multiplicação (opção 3)
- Divisão (opção 4).
- Saída (opção 5)
O programa deve possibilitar ao usuário a escolha da operação desejada, a exibição do resultado e a volta ao menu de opções. O programa só termina quando for escolhida a opção de saída (opção 5).*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

int op , x, y;

while (op)
{
    printf("\n");
    printf("MENU\n");
    printf("Adicao (opcao 1)\n");
    printf("Subtracao (opcao 2)\n");
    printf("Multiplicao (opcao 3)\n");
    printf("Divisao (opcao 4)\n");
    printf("Saida (opcao 5)\n");
    scanf("%d", &op);

    if(op >= 1 && op <=4){
    printf("Escolha um numero X\n");
    scanf("%d", &x);
    printf("Escolha um numero Y\n");
    scanf("%d", &y);
    }

    switch (op)
    {
    case 1:
        printf("Adicao:\n");
        printf("%d + %d = %d\n", x, y ,x+y);
        break;
    case 2:
        printf("Subtracao:\n");
        printf("%d - %d = %d\n", x, y ,x-y);
        break;
    case 3:
        printf("Multiplicacao:\n");
        printf("%d * %d = %d\n", x, y ,x*y);
        break;
    case 4:
        printf("Divisao:\n");
        printf("%d / %d = %d\n", x, y ,x/y);
        break;
    case 5:
        printf("Saindo!\n");
        return 0;
    default:
        printf("Escolha uma opcao valida!\n");
        break;
    }
}

return 0;

}
