/*7. Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os espaços em branco do vetor e depois escrever o vetor resultante.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char frase[100];
    char resultado[100];
    int j = 0;

    printf("Digite uma frase\n");
    fgets(frase, 100, stdin);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ') {
            resultado[j] = frase[i];
            j++;
        }
    }

    resultado[j] = '\0';
    printf("\n\n");
    printf("Vetor resultante\n%s", resultado);

    return 0;
}
