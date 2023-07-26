/*5. Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em letras minúsculas. Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int i;
    char cadeia[50];

    printf("Digite uma cadeia de caracteres de letras maiusculas\n");
    fgets(cadeia, 50, stdin);

    int tamanho = strlen(cadeia) - 1;

    for (i = 0; i < tamanho; i++){
        if(cadeia[i] >= 65 && cadeia[i] <= 90){

            cadeia[i] += 32;
            
        }
    }
    
    fputs(cadeia, stdout);   

    return 0;
}
