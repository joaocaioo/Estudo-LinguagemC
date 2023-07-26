/*10. Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o desconto para pagamento à vista é de 10% sobre o valor total, calcular o valor a ser pago à vista. Escrever o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago à vista.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    
    char produto[50];
    float valor;
    
    printf("Digite o nome do produto\n");
    fgets(produto, 50, stdin);
    printf("Digite o valor do produto\n");
    scanf("%f", &valor);

    float desconto = valor * 0.1;
    
    printf("\n");
    printf("Produto: %sValor: R$%.2f\nDesconto: R$%.2f\n\nValor a ser pago a vista: R$%.2f", produto, valor, desconto, valor - desconto);

    return 0;
}
