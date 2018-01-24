/* URI Online Judge | 1173
Preenchimento de Vetor I
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia um valor e fa�a um programa que coloque o valor lido na primeira posi��o de um vetor N[10]. Em cada posi��o subsequente, coloque o dobro
do valor da posi��o anterior. Por exemplo, se o valor lido for 1, os valores do vetor devem ser 1,2,4,8 e assim sucessivamente. Mostre o vetor em seguida.

Entrada

A entrada cont�m um valor inteiro (V<=50).

Sa�da

Para cada posi��o do vetor, escreva "N[i] = X", onde i � a posi��o do vetor e X � o valor armazenado na posi��o i. O primeiro n�mero do
vetor N (N[0]) ir� receber o valor de V. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n[10], i, v;

    scanf("%d", &v);
    n[0] = v;

    for(i=0 ; i<10; i++){
        printf("N[%d] = %d\n", i, v);
        v+= v;
    }

    return 0;
}
