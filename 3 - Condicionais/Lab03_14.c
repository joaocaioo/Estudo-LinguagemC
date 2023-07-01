/*14. A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi aprovado. Faça todas as verificações necessárias.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void){


float prova1, prova2, prova3,mediaP;

printf("Digite a nota da primeira prova(0 a 10)\n");
scanf("%f", &prova1);
printf("Digite a nota da segunda prova(0 a 10)\n");
scanf("%f", &prova2);
printf("Digite a nota da terceira prova(0 a 10)\n");
scanf("%f", &prova3);

if(((prova1 <= 0) || (prova1 >=10)) || ((prova2 <= 0) || (prova2 >=10)) || ((prova3 <= 0) || (prova3 >=10))){

    printf("Nota invalida\n");
    
    return 0;
}

mediaP = ((prova1 * 2) + (prova2 * 3) + (prova3 * 5)) / 10;

printf("A media do estudante e de %.1f\n", mediaP);

if((mediaP >= 0) && (mediaP <= 2.9)){

    printf("Aluno reprovado");

}else if((mediaP >= 3) && (mediaP <= 4.9)){

    printf("Aluno de recupercao");
    
}else{

    printf("Aluno aprovado");

}

return 0;

}