/* URI Online Judge | 1153
Fatorial Simples
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Ler um valor N. Calcular e escrever seu respectivo fatorial. Fatorial de N = N * (N-1) * (N-2) * (N-3) * ... * 1.

Entrada

A entrada contém um valor inteiro N (0 < N < 13).

Saída

A saída contém um valor inteiro, correspondente ao fatorial de N. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int N,a,b=1;
    scanf("%d", &N);
    for(a=N; a>=1; a--)
        b = b * a;
    printf ("%d\n", b);
    return 0;
}
