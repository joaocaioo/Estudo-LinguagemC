/*8. Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir para ele digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram fornecidos. Exibir na tela o vetor final que foi digitado*/


#include <stdio.h>
#include <stdio.h>


int main() {
    int i, j;
    int vetorBase[10], vetorFinal[10];

    for (i = 0; i < 10; i++){
        printf("Digite um valor para a posicao %d\n", i);
        scanf("%d", &vetorBase[i]);

        for (j = 0; j < i; j++){ // Verifica se o valor lido ja existe no vetor
            if(vetorBase[i] == vetorFinal[j]){
                printf("Valor ja existe no vetor!\n");
                i--; // Caso exista ele pede um novo valor para aquela posição do vetor
                break;
            }
        }
        if (j == i){ 
            vetorFinal[i] = vetorBase[i]; //Se o valor nao existir ele armazena no vetor final na posição atual
        }
    }

    printf("Vetor final: ");
    for (i = 0; i < 10; i++){
        printf("%d ",vetorFinal[i]);
    }

    return 0;
}
