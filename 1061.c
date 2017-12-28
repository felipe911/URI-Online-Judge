/* URI Online Judge | 1061
Tempo de um Evento
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de
Abril, iniciando e terminando dentro do mês. O problema é que Pedrinho quer calcular o
tempo em segundos que o evento vai durar, uma vez que ele sabe quando inicia e quando
termina o evento..

Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar
Pedrinho a calcular a duração deste evento.

Entrada
Como entrada, na primeira linha vai haver a descrição “Dia”, seguido de um espaço e o
dia do mês no qual o evento vai começar. Na linha seguinte, será informado o momento
no qual o evento vai iniciar, no formato hh : mm : ss. Na terceira e quarta linha de
entrada haverá outra informação no mesmo formato das duas primeiras linhas, indicando o
término do evento.

Saída
Na saída, deve ser apresentada a duração do evento, no seguinte formato:

W dia(s)
X hora(s)
Y minuto(s)
Z segundo(s)

Obs: Considere que o evento do caso de teste para o problema tem duração mínima de 1
minuto. */

#include<stdio.h>

int diaSegundos(int, int, int);

int diaSegundos(int hor, int min, int seg){
    int horaSegundos, minSegundos, totSegundos;

    horaSegundos = hor * 3600;
    minSegundos = min * 60;
    totSegundos = horaSegundos + minSegundos + seg;

    return totSegundos;
}

int main(){
    int diaIni, diaFin, horasIni , minutosIni, segundosIni, totInicial, horasFin , minutosFin, segundosFin, totFin;
    int TotalInicial, TotalFinal, diferenca, W, X, Y, Z;
    char dia[20], ch;

    scanf("%s", &dia);
    scanf("%d\n", &diaIni);
    scanf("%d %c %d %c %d", &horasIni, &ch, &minutosIni, &ch, &segundosIni);
    scanf("%s", &dia);
    scanf("%d\n", &diaFin);
    scanf("%d %c %d %c %d", &horasFin, &ch, &minutosFin, &ch, &segundosFin);

    totInicial = diaSegundos(horasIni, minutosIni, segundosIni);
    totFin = diaSegundos(horasFin, minutosFin, segundosFin);

    TotalInicial = (diaIni * 86400) + totInicial;
    TotalFinal = (diaFin * 86400) + totFin;

    diferenca = TotalFinal - TotalInicial;

    W = diferenca / 86400;
    X = (diferenca % 86400) / 3600;
    Y = ((diferenca % 86400) % 3600 ) / 60;
    Z = ((diferenca % 86400) % 3600 ) % 60;

    printf("%d dia(s)\n", W);
    printf("%d hora(s)\n", X);
    printf("%d minuto(s)\n", Y);
    printf("%d segundo(s)\n", Z);

return 0;
}