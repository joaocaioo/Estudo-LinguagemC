/*4. Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere.*/

#include <stdio.h>
#include <string.h>

int main() {

    int i, soma = 0;
    char palavra[20], letra;
    
    printf("Digite uma palavra\n");
    fgets(palavra, 20, stdin);
    int tamanho = strlen(palavra) - 1;

    printf("Digite uma letra para substituir as vogais da sua palavra\n");
    scanf("%c", &letra);

    for (i = 0; i < tamanho; i++){
        
        if((palavra[i] == 'a') || (palavra[i] == 'e') || (palavra[i] == 'i') || (palavra[i] == 'o') || (palavra[i] == 'u')){

            soma++;
            palavra [i] = letra;
        }
    }
    
    printf("\n\n");
    printf("Sua palavra possui %d vogais\n", soma);
    printf("Trocando todas vogais por %c\n%s", letra, palavra);

    return 0;
   
}
