/*8. Faça um programa em que troque todas as ocorrências de uma letra L1 pela letra L2 em uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int i;
    char L1, L2, str[100];

    printf("Digite uma frase\n");
    fgets(str, 100, stdin);

    int tamanho = strlen(str) - 1;

    printf("Digite uma letra para ser substituida\n");
    scanf(" %c", &L1);
    printf("Digite uma letra para substituir a letra escolhida\n");
    scanf(" %c", &L2);

    for (i = 0; i < tamanho; i++){
        
        if (str[i] == L1){
            
            str[i] = L2;
        }
        
    }
    
    printf("\n");
    fputs(str, stdout);

    return 0;
}
