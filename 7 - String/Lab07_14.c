/*14. Implemente um programa que leia duas strings, str1 e str2, e um valor inteiro positivo N. Concatene não mais que N caracteres da string str2 à string str1 e termine str1 com ‘\0’.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char str1[100], str2[100];
    int i, n;

    printf("Digite a primeira string\n");
    fgets(str1, 100, stdin);
    printf("Digite a segunda string\n");
    fgets(str2, 100, stdin);

    printf("Digite o valor de N\n");
    scanf("%d", &n);

    int tamanho_str1 = strlen(str1) - 1; 
    int tamanho_str2 = strlen(str2) - 1; 

    for (i = 0; i < n && i < tamanho_str2; i++) {
        str1[tamanho_str1++] = str2[i];
    }

    str1[tamanho_str1] = '\0'; // Adiciona o caractere nulo no final da string

    printf("A nova string str1 e: %s\n", str1);

    return 0;
}

