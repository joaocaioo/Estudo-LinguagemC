/*15. Crie um programa que receba três valores (obrigatoriamente maiores que zero), representando as medidas dos três lados de um triângulo. Elabore funções para:
a) Determinar se eles lados formam um triângulo, sabendo que:
- O comprimento de cada lado de um triângulo é menor do que a soma dos outros
dois lados.
b) Determinar e mostrar o tipo de triângulo, caso as medidas formem um triângulo. Sendo 
que:
- Chama-se equilátero o triângulo que tem três lados iguais;
- Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
- Recebe o nome de escaleno o triângulo que tem os três lados diferentes.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int tipoTriangulo(int a, int b, int c){

    if((a == b) && (a == c)){
        printf("Triangulo equilatero\n");
    }else if((a == b) || (a == c) || (b == c)){
        printf("Triangulo isosceles\n");
    }else if((a != b) && (a != c)){
        printf("Triangulo escaleno\n");
    }

    return 0;
}

int main (void){

    int a, b, c;
    
    printf("Digite os tres lados de um triangulo\n");
    scanf("%d %d %d", &a, &b, &c);

    if((a > 0) && (b > 0) && (c > 0)){
        if((a < b + c) && (b < a + c) && (c < a + c)){

            tipoTriangulo(a, b, c);

        }else{

            printf("Nao e um triangulo!");
        }
    }else{

        printf("Valores invalidos, digite numeros positivos!");
    }

    return 0;
}