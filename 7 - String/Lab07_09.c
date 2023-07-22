/*9. Faça um programa que preencha uma matriz de string com os modelos de cinco carros (exemplos de modelos: Fusca, Gol, Vectra, etc.). Em seguida, preencha um vetor com o consumo desses carros, isto é, quantos quilômetros cada um deles faz com um litro de combustível. 
Calcule e mostre:
(a) O modelo de carro mais econômico;
(b) Quantos litros de combustível cada um dos carros cadastrados consome para percorrer uma distância de 1.000 quilômetros.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_CARROS 5

int main() {
    char modelos[NUM_CARROS][100] = {"Fusca","Gol","Vectra","Corolla","Civic"};

    float consumo[NUM_CARROS] = {12.5, 14.2, 10.8, 15.1, 13.7};

    int i, indice_carro_mais_economico = 0;
    float menor_consumo = 9999.0;  // inicializa com valor alto para comparar e encontrar o menor consumo.

    printf("Modelos e Consumo dos Carros:\n");
    for (i = 0; i < NUM_CARROS; i++) {
        printf("%s - %.1f km/l\n", modelos[i], consumo[i]);
    }

    
    for (i = 0; i < NUM_CARROS; i++) { // encontrando o modelo de carro mais econômico
        if (consumo[i] < menor_consumo) {
            menor_consumo = consumo[i];
            indice_carro_mais_economico = i;
        }
    }
    printf("\n");
    printf("O modelo de carro mais economico\n%s", modelos[indice_carro_mais_economico]);

    // Calcula e mostra quantos litros de combustível cada carro consome para percorrer 1000 quilômetros

    printf("\n\n");
    printf("Consumo para percorrer 1000 quilometros\n");
    for (i = 0; i < NUM_CARROS; i++) {
        float litros_consumidos = 1000.0 / consumo[i];
        printf("%s: %.2f litros\n", modelos[i], litros_consumidos);
    }

    return 0;
}
