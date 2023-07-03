/*27. Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
Categoria  | Idade
Infantil A | 5 a 7
Infantil B | 8 a 10
Juvenil A  | 11 a 13
Juvenil B  | 14 a 17
Sênior     | maiores de 18 anos*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){


int idade;

printf("Digite a idade de um nadador\n");
scanf("%d", &idade);

if(idade <= 4){

    printf("Idade invalida, o nadadore e muito novo para participar");


}else{
if((idade >= 5) && (idade <= 7)){
    
    printf("O nadador esta na categoria 'Infantil A'");

}else if((idade >= 8) && (idade <= 10)){

   printf("O nadador esta na categoria 'Infantil B'");

}else if((idade >= 11) && (idade <= 13)){

    printf("O nadador esta na categoria 'Juvenil A'");

}else if((idade >= 14) && (idade <= 17)){

    printf("O nadador esta na categoria 'Juvenil B'");

}else{

    printf("O nadador esta na categoria 'Senior'");
}
    }
return 0;

}