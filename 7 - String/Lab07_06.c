/*5. Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em letras minúsculas. Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char cadeia[100];

    printf("Digite Letras minusculas\n");
    fgets(cadeia, 100, stdin);

    int i = 0;
    while (cadeia[i] != '\0') {
        if (cadeia[i] >= 'a' && cadeia[i] <= 'z') {
            cadeia[i] = cadeia[i] - 32;
        }
        i++;
    }

    printf("Letras maiusculas\n%s", cadeia);

    return 0;
}
