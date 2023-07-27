/*12. O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo de substituição na qual cada letra do texto substituída por outra, que se apresenta no alfabeto abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa que faça uso desse Código de César (3 posições), entre com uma string e retorne a string codificada. 
Exemplo:
String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    
    int i;
    char codigo[100];

    printf("Digite uma frase para ser criptografada\n");
    fgets(codigo, 100, stdin);

    int tamanho = strlen(codigo) - 1;

    for (i = 0; i < tamanho; i++){

        if((codigo[i] >= 65 && codigo[i] <= 87) || (codigo[i] >= 97 && codigo[i] <= 119)){
            
            codigo[i] += 3;
        }else if ((codigo[i] >= 88 && codigo[i] <= 90) || (codigo[i] >= 120 && codigo[i] <= 122)){

            codigo[i] -= 23;
        }

        
    }
    
    fputs(codigo, stdout);

    
    return 0;
}
