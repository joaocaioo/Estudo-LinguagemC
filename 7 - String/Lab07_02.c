/*2. Faça um programa que conte o número de 1’s que aparecem em uma string. Exemplo: “0011001” -> 3*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int i, contador = 0;
    char str[10];
    printf("Digite uma string apenas com zero e um\n");
    fgets(str, 10, stdin);
    
    for (i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '1'){
            contador++;
        }
        
    }
    
    printf("A string str possui %d numeros 1", contador);

    return 0;
}