/* URI Online Judge | 1047
Tempo de Jogo com Minutos
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir
calcule a duração do jogo.

Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

Entrada
Quatro números inteiros representando a hora de início e fim do jogo.

Saída
Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” . */

#include<stdio.h>

int main()
{
    int Hi, Mi, Hf, Mf, auxM, auxH;

    scanf("%d %d %d %d", &Hi, &Mi, &Hf, &Mf);

    auxH = Hf - Hi;
    if (auxH < 0){
        auxH = 24 + (Hf - Hi);
    }
    auxM = Mf - Mi;
    if (auxM < 0){
        auxM = 60 + (Mf - Mi);
        auxH--;
    }
    if (Hf == Hi && Mf == Mi){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", auxH, auxM);
    }
    return 0;
}