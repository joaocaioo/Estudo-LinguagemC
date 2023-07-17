/*4. Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char palavra[100];
    char caractere;

    printf("Digite uma palavra\n");
    fgets(palavra, 100, stdin);

    int numVogais = 0;
    int tamanho = strlen(palavra);

    
    printf("Digite um caractere para substituir as vogais: ");
    scanf(" %c", &caractere);

    for (int i = 0; i < tamanho; i++) {
        char c = palavra[i];

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            numVogais++;
            palavra[i] = caractere;
        }
    }

    printf("\n\n");
    printf("A palavra possui %d vogais.\n", numVogais);
    printf("Palavra com as vogais substituidas: %s\n", palavra);

    return 0;
}
