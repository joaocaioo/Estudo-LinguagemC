/*18. Faça uma função que receba por parâmetro dois valores inteiros x e z. Calcule e retorne o resultado de x^z para o programa principal. Atenção não utilize nenhuma função pronta de exponenciação.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int exponenciacao(int x, int z){

    int i, exp;

    for (i = 1; i < z; i++)
    {
        if(i == 1){
            exp = x * x;
        }else{

            exp *= x;
        }
    }
    
    printf("%d^%d equivale a %d", x, z, exp);
    return 0;
}

int main (void){

    int x, z;
    
    printf("Digite dois numeros inteiros\n");
    scanf("%d %d", &x, &z);

    exponenciacao(x, z);
    
    return 0;
}