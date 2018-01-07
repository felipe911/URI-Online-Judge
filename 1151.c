/* URI Online Judge | 1151
Fibonacci Fácil
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. Nessa sequência, cada número,
depois dos 2 primeiros, é igual à soma dos 2 anteriores. Escreva um algoritmo que leia um inteiro N (N < 46) e mostre os N
primeiros números dessa série.

Entrada

O arquivo de entrada contém um valor inteiro N (0 < N < 46).

Saída

Os valores devem ser mostrados na mesma linha, separados por um espaço em branco. Não deve haver espaço após o último valor. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int x,y, a=0,b=1,c=0;
    scanf("%d", &x);
    for(y=1; y<x; y++)
    {
        if(y%2==1)
        {
            printf("%d ",c);
            c=a+b;
            a=c;
        }
        else if(y==2)
            printf("%d ",c);
        else if(y%2==0)
        {
            printf("%d ",c);
            c=a+b;
            b=c;
        }
    }
    printf("%d\n",c);
    return 0;
}
