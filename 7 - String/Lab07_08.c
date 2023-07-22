/*8. Faça um programa em que troque todas as ocorrências de uma letra L1 pela letra L2 em uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char frase[100];
    char L1, L2;

    printf("Digite uma frase\n");
    fgets(frase, 100, stdin);

    printf("Digite a letra que deseja trocar\n");
    scanf(" %c", &L1);

    printf("Digite a letra quevai ser trocada pela letra '%c'\n", L1);
    scanf(" %c", &L2);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == L1) {
            frase[i] = L2;
        }
    }

    printf("\n\n");
    printf("%s", frase);

    return 0;
}
