/* URI Online Judge | 1019
Conversão de Tempo
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica,
e informe-o expresso no formato horas:minutos:segundos.

Entrada

O arquivo de entrada contém um valor inteiro N.

Saída

Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos,
conforme exemplo fornecido. */

#include <stdio.h>
 
int main() {
 
    int n, min, hr,shr, seg;
    scanf ("%i", &n);
    hr = n / 3600;
    shr = n - (hr * 3600);
    min = shr / 60;
    seg = shr - (min*60);

    printf ("%i:%i:%i\n", hr, min, seg);
    return 0;
}