/*13. Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do estudante e indicar se o estudante foi aprovado ou reprovado. A nota para aprovação deve ser igual ou superior a 60 pontos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void){


float prova1, prova2, prova3,mediaP;

printf("Digite a nota da primeira prova\n");
scanf("%f", &prova1);
printf("Digite a nota da segunda prova\n");
scanf("%f", &prova2);
printf("Digite a nota da terceira prova\n");
scanf("%f", &prova3);

mediaP = (prova1 + prova2 + (prova3 * 2)) / 4;

printf("A media do estudante e de %.1f\n", mediaP);

if(mediaP >= 60){

    printf("Aluno aprovado");

}else {

    printf("Aluno reprovado");
    
}

return 0;

}