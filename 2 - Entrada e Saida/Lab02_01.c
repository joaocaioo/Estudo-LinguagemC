 
 /*01. Faça um programa que leia um número inteiro e o imprima*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x;
  
  printf("Digite um numero inteiro:\n");
  scanf("%d", &x);

  printf("O numero inteiro escolhido foi: %d", x);
  
  return 0;
}