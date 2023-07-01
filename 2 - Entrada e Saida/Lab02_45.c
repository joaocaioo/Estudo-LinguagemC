/*45. Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela ASCII para resolver o problema.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

char letra, minuscula;

printf("Digite a uma letra maiuscula\n");
scanf("%c", &letra);

minuscula = letra + 32;


printf("%c", minuscula);

return 0;

}