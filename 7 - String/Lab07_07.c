/*7. Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os espaços em branco do vetor e depois escrever o vetor resultante.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int i;
    char frase[100];

    printf("Digite uma frase\n");
    fgets(frase, 100, stdin);

    int tamanho = strlen(frase) - 1;

    for (i = 0; i < tamanho; i++){
       
       if(frase[i] == 32){
        
        frase[i] = 127;

       }
       
    }
    
    printf("\n");
    fputs(frase, stdout);

    return 0;
}
