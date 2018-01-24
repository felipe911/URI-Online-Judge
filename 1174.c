/* URI Online Judge | 1174
Sele�ao em Vetor I
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Fa�a um programa que leia um vetor A[100]. No final, mostre todas as posi��es do vetor que armazenam um valor menor ou igual a 10 e o
valor armazenado em cada uma das posi��es.

Entrada

A entrada cont�m 100 valores, podendo ser inteiros, reais, positivos ou negativos.

Sa�da

Para cada valor do vetor menor ou igual a 10, escreva "A[i] = x", onde i � a posi��o do vetor e x � o valor armazenado na posi��o,
com uma casa ap�s o ponto decimal. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    double a[100];

    for(i=0; i<100; i++){
        scanf("%lf", &a[i]);

        if(a[i] <= 10)
            printf("A[%d] = %.1lf\n", i, a[i]);
    }

    return 0;
}
