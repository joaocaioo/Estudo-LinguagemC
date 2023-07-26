/*6. Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está entre 97 e 122.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int i;
    char cadeia[50];

    printf("Digite uma cadeia de caracteres de letras minusculas\n");
    fgets(cadeia, 50, stdin);

    int tamanho = strlen(cadeia) - 1;

    for (i = 0; i < tamanho; i++){
        
        if(cadeia[i] >= 97 && cadeia[i] <= 122){

            cadeia[i] -= 32; 
        }
    }
    
    fputs(cadeia, stdout);

    return 0;
}
