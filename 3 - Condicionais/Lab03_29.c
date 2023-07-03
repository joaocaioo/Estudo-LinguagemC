/*29. Faça uma prova de matemática para crianças que estão aprendendo a somar números inteiros menores do que 100. Escolha números aleatórios entre 1 e 100, e mostre na tela a pergunta: qual é a soma de a + b, onde a e b são os números aleatórios. Peça a resposta. Faça cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas corretas, além de quantas vezes o aluno acertou.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){


int a, b, soma1, soma2, soma3, soma4, soma5, acertos = 0;

printf("Digite numeros inteiros menores do que 100\n");
scanf("%d %d", &a, &b);
if(!(a <= 100) || !(b <= 100)){

    printf("Numeros invalidos\n");
}else{
printf("Questao 1 - Qual a soma de %d + %d?\n", a, b);
scanf("%d", &soma1);
if(soma1 == (a+b)){

    printf("Voce acetou!\n");
    acertos += 1;

}else{

    printf("Voce errou! a resposta correta e igual a %d\n", a+b);

}

printf("Questao 2 - Qual a soma de 50 + 50?\n");
scanf("%d", &soma2);
if(soma2 == (50+50)){

    printf("Voce acetou!\n");
    acertos += 1;

}else{

    printf("Voce errou! a resposta correta e igual a %d\n", 50+50);

}
printf("Questao 3 - Qual a soma de 25 + 60?\n");
scanf("%d", &soma3);
if(soma3 == (25+60)){

    printf("Voce acetou!\n");
    acertos += 1;

}else{

    printf("Voce errou! a resposta correta e igual a %d\n", 25+60);

}
printf("Questao 4 - Qual a soma de 13 + 37?\n");
scanf("%d", &soma4);
if(soma4 == (13+37)){

    printf("Voce acetou!\n");
    acertos += 1;

}else{

    printf("Voce errou! a resposta correta e igual a %d\n", 13+37);

}
printf("Questao 5 - Qual a soma de 8 + 72?\n");
scanf("%d", &soma5);
if(soma5 == (8+72)){

    printf("Voce acetou!\n");
    acertos += 1;

}else{

    printf("Voce errou! a resposta correta e igual a %d\n", 8+72);

}
}

printf("Total de acertos %d/5", acertos);



return 0;

}
