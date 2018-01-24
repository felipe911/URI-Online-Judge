/* URI Online Judge | 1172
Substitui��o em Vetor I
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Fa�a um programa que leia um vetor X[10]. Substitua a seguir, todos os valores nulos e negativos do vetor X por 1. Em seguida mostre o vetor X.

Entrada

A entrada cont�m 10 valores inteiros, podendo ser positivos ou negativos.

Sa�da

Para cada posi��o do vetor, escreva "X[i] = x", onde i � a posi��o do vetor e x � o valor armazenado naquela posi��o. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x[10], i;

    for(i=0; i < 10; i++){
        scanf("%d", &x[i]);

        if(x[i] <= 0)
            x[i] = 1;

        printf("X[%d] = %d\n", i, x[i]);
    }

    return 0;
}
