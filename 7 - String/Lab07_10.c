/*10. Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o desconto para pagamento à vista é de 10% sobre o valor total, calcular o valor a ser pago à vista. Escrever o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago à vista.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[100];
    float valorTotal, valorDesconto, valorAVista;

    // Leitura do nome da mercadoria e valor total
    printf("Digite o nome da mercadoria\n");
    fgets(nome, 100, stdin);

    printf("Digite o valor total da mercadoria\n");
    scanf("%f", &valorTotal);

    // Cálculo do desconto e do valor a ser pago à vista
    valorDesconto = valorTotal * 0.1; // 10% de desconto
    valorAVista = valorTotal - valorDesconto;

    // Exibição dos resultados
    printf("\n");
    printf("Mercadoria: %s", nome);
    printf("Valor total: R$ %.2f\n", valorTotal);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor a ser pago a vista: R$ %.2f\n", valorAVista);

    return 0;
}

