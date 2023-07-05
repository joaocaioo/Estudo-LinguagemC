/*2. Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira vez deve usar a estrutura de repetição for, a segunda while, e a terceira do-while.*/

#include <stdio.h>
#include <stdlib.h>


int main(void){


int i;

printf("Estrutura de repeticao 'for':\n");
for (i = 1;i <= 100; i++)
{
    printf("%d ", i);
}

printf("\n\n");

printf("Estrutura de repeticao 'while':\n");
i = 1;
while (i <= 100)
{
   
    printf("%d ", i);
    i ++;
}

printf("\n\n");

printf("Estrutura de repeticao 'do-while':\n");
i = 1;
do
{
    
    printf("%d ", i);
    i ++;

} while (i <= 100);

return 0;

}


