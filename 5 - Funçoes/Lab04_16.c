/*16. Faça uma função chamada desenha_linha. Ele deve desenhar uma linha na tela usando uma sequência de símbolos de igual (Ex.: ========). A função recebe por parâmetro quantos sinais de igual serão mostrados.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int desenha_linha(int n){

    int i;

    for (i = 1; i <= n; i++)
    {
        printf("=");
    }
    

    return 0;
}

int main (void){

    int n;
    
    printf("Digite quantos sinais voce quer na sua linha\n");
    scanf("%d", &n);

    desenha_linha(n);

    return 0;
}