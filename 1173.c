/* URI Online Judge | 1173
Preenchimento de Vetor I
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia um valor e faça um programa que coloque o valor lido na primeira posição de um vetor N[10]. Em cada posição subsequente, coloque o dobro
do valor da posição anterior. Por exemplo, se o valor lido for 1, os valores do vetor devem ser 1,2,4,8 e assim sucessivamente. Mostre o vetor em seguida.

Entrada

A entrada contém um valor inteiro (V<=50).

Saída

Para cada posição do vetor, escreva "N[i] = X", onde i é a posição do vetor e X é o valor armazenado na posição i. O primeiro número do
vetor N (N[0]) irá receber o valor de V. */

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
