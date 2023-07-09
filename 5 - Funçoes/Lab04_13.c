/*13. Faça uma função que receba dois valores numéricos e um símbolo. Este símbolo representará a operação que se deseja efetuar com os números. Se o símbolo for ‘+’ deverá ser realizada uma adição, se for ‘–‘ uma subtração, se for ‘*’ uma multiplicação e se for ‘/’ será efetuada uma divisão.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int soma(int x, int y){

    printf("%d + %d = %d\n", x, y, x+y);
    return 0;

}

int subtracao(int x, int y){

    printf("%d - %d = %d\n", x, y, x-y);
    return 0;

}

int multiplicacao(int x, int y){

    printf("%d * %d = %d\n", x, y, x*y);
    return 0;

}

int divisao(int x, int y){

    printf("%d / %d = %d\n", x, y, x/y);
    return 0;

}


int main (void){

    int x, y;
    char simbolo;
    
    printf("Digite um numero\n");
    scanf("%d", &x);
    printf("Digite outro numero\n");
    scanf("%d", &y);

    printf("SIMBOLOS\n");
    printf("+ - Soma\n");
    printf("- - Subtracao\n");
    printf("* - Multiplicacao\n");
    printf("/ - Divisao\n");
    scanf(" %c", &simbolo);

    switch (simbolo)
    {
    case '+':
        soma(x, y);
        break;
    case '-':
        subtracao(x, y);
        break;
    case '*':
        multiplicacao(x, y);
        break;
    case '/':
        divisao(x, y);
        break;
    
    default:
        printf("Digite um simbolo valido!");
        break;
    }

    return 0;
}