/*22. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. As condições para aposentadoria são
- Ter pelo menos 65 anos;
- Ou ter trabalhado pelo menos 30 anos;
- Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

int idade, tempo;


printf("Digite a idade de um funcionario\n");
scanf("%d", &idade);
printf("Digite o tempo de servico em anos desse funcionario\n");
scanf("%d", &tempo);

if((idade >= 65) || (tempo >= 30) || ((idade >= 60) && (tempo >= 25))){

    printf("Funcionario pode receber a aposentadoria!");

}else{

    printf("Funcionario nao pode receber a aposentadoria!");

}

return 0;

}