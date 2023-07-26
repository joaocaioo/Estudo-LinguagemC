/*11. Escreva um programa que recebe uma string S e inteiros não-negativos I e J e imprima o segmento S[I..J].*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char S[100];
    int I, J;

    printf("Digite uma string S\n");
    fgets(S, 100, stdin);
    printf("Digite o valor de I\n");
    scanf("%d", &I);
    printf("Digite o valor de J\n");
    scanf("%d", &J);

    
    S[strcspn(S, "\n")] = '\0'; // Removendo o caractere de nova linha (\n) do final da string S

    
    int tamanhoS = strlen(S); // Verifica se I e J estão dentro dos limites da string S
    if (I < 0 || J < 0 || I >= tamanhoS || J >= tamanhoS || I > J) {
        printf("I e J devem ser nao-negativos e I deve ser menor ou igual a J.\n");
        return 1; 
    }

  
    printf("S[%d..%d]: ", I, J);
    for (int k = I; k <= J; k++) {
        printf("%c", S[k]);
    }
    printf("\n");

    return 0;
}
