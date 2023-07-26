/*9. Faça um programa que preencha uma matriz de string com os modelos de cinco carros (exemplos de modelos: Fusca, Gol, Vectra, etc.). Em seguida, preencha um vetor com o consumo desses carros, isto é, quantos quilômetros cada um deles faz com um litro de combustível. 
Calcule e mostre:
(a) O modelo de carro mais econômico;
(b) Quantos litros de combustível cada um dos carros cadastrados consome para percorrer uma distância de 1.000 quilômetros.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_CARROS 5

int main() {
    
    int i, modelo, economico = 0;
    char carros[NUM_CARROS][100] = {"Fusca","Gol","Vectra","Corolla","Civic"};
    float consumo[NUM_CARROS] = {12.5, 14.2, 10.8, 15.1, 13.7};

    printf("(a) O modelo de carro mais economico\n");
    for (i = 0; i < NUM_CARROS; i++){ //achar o modelo do carro de menor consumo 
        
        if (consumo[i] > economico){

            economico = consumo[i];
            modelo = i;

        }
    }
    
    printf("%s", carros[modelo]);

    printf("\n");
    printf("(b) Quantos litros de combustivel cada um dos carros cadastrados consome para percorrer uma distancia de 1.000 quilometros.\n");
    float litros; 
    for (i = 0; i < NUM_CARROS; i++){
        
        litros = 1000 / consumo[i];
        printf("%s: %.2f Litros\n", carros[i], litros);

    }
    

    return 0;
}
