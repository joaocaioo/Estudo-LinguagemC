/*25. Calcule as raízes da equação de 2º grau.Lembrando que:
x =−b ± √delta/2a
Onde
delta = b^2 − 4ac E ax2 + bx + c = 0 representa uma equação do 2º grau.
A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação de segundo grau”.
- Se delta < 0, não existe real. Imprima a mensagem “Não existe raiz”.
- Se delta = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
- Se delta > 0, imprima as duas raízes reais.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){


int a, b, c;
double delta, x1, x2;

printf("ax2 + bx + c = 0 representa uma equacao do segundo grau\nDigite os valores de 'a' 'b' 'c'\n");
scanf("%d %d %d", &a, &b, &c);

delta = pow(b, 2) - (4 * a *c);
x1 = (-b + sqrt(delta)) / (2.0 * a);
x2 = (-b - sqrt(delta)) / (2.0 * a);

if(a == 0){

    printf("Nao e equacao de segundo grau!");

}else{
if(delta < 0){

    printf("Nao existe raiz");

}else if(delta == 0){

     printf("Raiz unica\n%lf", x1);

}else{

     printf("Raizes\nx'=%lf x''=%lf", x1, x2);
}
}
return 0;

}