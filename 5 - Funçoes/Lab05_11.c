/*11. Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. Se a letra for A, a função deverá calcular a média aritmética das notas do aluno; se for P, deverá calcular a média ponderada, com pesos 5, 3 e 2.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mediaA(float nota1, float nota2, float nota3){

    float aritmetica = (nota1 + nota2 + nota3) / 3;
    printf("A media aritmetica e de %.2f", aritmetica);
    
    return 0;

}

int mediaP(float nota1, float nota2, float nota3){

    float ponderada = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 10;
    printf("A media aritmetica e de %.2f", ponderada);

    return 0;

}

int main (void){

    float nota1, nota2, nota3;
    char letra;
    
    printf("Digite a primeira nota de um aluno\n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota desse aluno\n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota desse aluno\n");
    scanf("%f", &nota3);

    printf("\n\n");
    printf("Escolha qual media deseja fazer\n");
    printf("A - Media Aritmetica\n");
    printf("P - Media Ponderada\n");
    scanf(" %c", &letra);


    switch (letra)
    {
    case 'A':
        mediaA(nota1, nota2, nota3);
        break;
    case 'P':
        mediaP(nota1, nota2, nota3);
        break;
    default:
        printf("Opcao invalida\n");
        break;
    }

    return 0;
}