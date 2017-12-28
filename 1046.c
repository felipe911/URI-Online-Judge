/* URI Online Judge | 1046
Tempo de Jogo
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo,
sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima
de 1 hora e máxima de 24 horas.

Entrada
A entrada contém dois valores inteiros representando a hora de início e a hora de fim do
jogo.

Saída
Apresente a duração do jogo conforme exemplo abaixo. */

#include<stdio.h>

int main()
{
    int hi, hf, total;

    scanf("%d %d", &hi, &hf);

    if(hi > hf){
        total = ((hi - 24) * -1) + hf;
    }
    if(hf > hi){
        total = hf - hi;
    }
    if (hi == hf){
        total = 24;
    }

    printf("O JOGO DUROU %d HORA(S)\n", total);

return 0;
}