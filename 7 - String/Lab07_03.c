/*3. Faça um programa que receba uma palavra e a imprima de trás-para-frente.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int i, j = 0;
    char palavra[20], verso[20];
    printf("Digite uma palavra\n");
    fgets(palavra, 20, stdin);
    
    int tamanho = strlen(palavra) - 1; 

    for (i = tamanho - 1; i >= 0; i--) {
        verso[j] = palavra[i];
        j++;
    }
    
    verso[j] = '\0';


    printf("%s", verso);

    return 0;
}