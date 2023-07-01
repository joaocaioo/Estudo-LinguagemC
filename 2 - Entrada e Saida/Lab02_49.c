/*49. Faça um programa para leia o horário (hora, minuto e segundo) de início e a duração, em segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora, minuto e segundo) do termino da mesma.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

int horaInicio, minutoInicio, segInicio, duracao;

printf("Digite o horario (hora minuto segundo) de inicio do experimento\n");
scanf("%d %d %d", &horaInicio, &minutoInicio, &segInicio);

printf("Digite a duracao, em segundos, da experiencia biologica\n");
scanf("%d", &duracao);

int horaTermino = horaInicio + duracao / 3600;
int minutoTermino = minutoInicio + duracao /60;
int segundoTermino = segInicio + duracao;

horaTermino %= 24;
minutoTermino %= 60;
segundoTermino %= 60;


printf("Horario de inicio: %02d:%02d:%02d\nHorario Termino: %02d:%02d:%02d", horaInicio, minutoInicio, segInicio, horaTermino, minutoTermino, segundoTermino);

return 0;

}