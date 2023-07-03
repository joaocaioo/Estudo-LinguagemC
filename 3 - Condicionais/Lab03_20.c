/*20. Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triangulo e, se forem, se é um triângulo escaleno, equilátero ou isósceles, considerando os seguintes conceitos:
- O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados;
- Chama-se equilátero o triângulo que tem três lados iguais;
- Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
- Recebe o nome de escaleno o triângulo que tem os três lados diferentes;*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

int a, b, c;

printf("Digite os valores dos lados de um triangulo: A B C\n");
scanf("%d %d %d", &a, &b, &c);

if(!(a < b + c) || !(b < a + c) || !(c < b + a)){

    printf("Valores invalidos\nO comprimento de cada lado de um triângulo deve ser menor do que a soma dos outros dois lados");

} else{
    if((a == b) && (a == c)){

        printf("Esse triangulo equilatero");

    }else if(((a == b) && (a != c)) || ((a == c) && (a != b)) || ((b == c) && (b != a))){

         printf("Esse triangulo isosceles");

    }else{

        printf("Esse triangulo escaleno");

    }

    
}

return 0;

}