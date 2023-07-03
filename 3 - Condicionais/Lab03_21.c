/*21. Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida. Escreva uma mensagem de erro se a opção for inválida.Escolha a opção:
1- Soma de 2 números.
2- Diferença entre 2 números (maior pelo menor).
3- Produto entre 2 números.
4- Divisão entre 2 números (o denominador não pode ser zero).
Opção
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

int opcao, x, y;

printf("Menu\n");
printf("1 - Soma de 2 numeros.\n");
printf("2 - Diferenca entre 2 numeros (maior pelo menor).\n");
printf("3 - Produto entre 2 numeros.\n");
printf("4 - Divisao entre 2 numeros (o denominador nao pode ser zero).\nOpcao: ");
scanf("%d", &opcao);
if((opcao >= 6) || (opcao <= 0)){
    printf("Opcao invalida!");
}else{
printf("Digite dois valores\n");
scanf("%d %d", &x, &y);
}

switch (opcao){
case 1:
    printf("A soma de %d e %d equivale a %d\n", x, y, x+y);
    break;
case 2:
    if(x > y){

        printf("A soma de %d e %d equivale a %d\n", x, y, x-y);

    }else{

        printf("A soma de %d e %d equivale a %d\n", y, x, y-x);

    }
    break;
case 3:
    printf("O produto de %d e %d equivale a %d\n", x, y, x*y);
    break;
case 4:
    if(y == 0){

    printf("O denominador nao pode ser zero\n");

    }else{

    printf("A divisao de %d e %d equivale a %d\n", x, y, x/y);

    }
    break;
}

return 0;

}