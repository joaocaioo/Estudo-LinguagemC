/*13. Faça um programa que, dada uma string, diga se ela é um palíndromo ou não. Lembrando que um palíndromo é uma palavra que tenha a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita. 
Exemplo:
ovo
arara
Socorram-me, subi no ônibus em Marrocos
Anotaram a data da maratona*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main() {
    char frase[100];
    int tamanho, i, j = 0, verifica = 0;
    char verso[100];

    printf("Digite uma palavra ou frase\n");
    fgets(frase, 100, stdin);

    tamanho = strlen(frase) - 1;
    for (i = 0; i < tamanho; i++) {
        if (isalpha(frase[i])) { // Ignora caracteres que não são letras

            verso[j] = tolower(frase[i]); // Converte para minúsculas
            j++;
        }
    }

    verso[j] = '\0';

    int tamanho_verso = strlen(verso);
    for (i = 0; i < tamanho_verso / 2; i++) {
        if (verso[i] != verso[tamanho_verso - i - 1]){

            verifica++;
            break; 
        }
    }

    if (verifica != 0) {
        printf("Nao e um palindromo!\n");
    } else {
        printf("Palindromo!\n");
    }

    return 0;
}