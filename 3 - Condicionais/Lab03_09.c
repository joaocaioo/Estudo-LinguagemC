/*9. Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for maior que 20% do salário imprima: “Empréstimo não concedido”, caso contrário imprima: “Empréstimo concedido”.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void){

float salario, prestacao;

printf("Digite o salario de um trabalhador\n");
scanf("%f", &salario);
printf("Digite o valor da prestacao de um emprestimo\n");
scanf("%f", &prestacao);

if(prestacao > (salario * 0.2)){

    printf("Emprestimo nao concedido");

}else {

    printf("Emprestimo concedido");
    
}

return 0;

}