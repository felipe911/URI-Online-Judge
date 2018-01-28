/* URI Online Judge | 1175
Troca em Vetor I
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Fa�a um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o �ltimo, o segundo elemento com o pen�ltimo, etc., at�
trocar o 10� com o 11�. Mostre o vetor modificado.

Entrada
A entrada cont�m 20 valores inteiros, positivos ou negativos.

Sa�da
Para cada posi��o do vetor N, escreva "N[i] = Y", onde i � a posi��o do vetor e Y � o valor armazenado naquela posi��o. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n[20], y[20], i=0, j;

    while(i < 20){
        scanf("%d", &n[i]);
        i++;
    }

    i-= 1;

    for(j=0; j < 20; j++, i--){
        y[j] = n[i];
        printf("N[%d] = %d\n", j, y[j]);
    }

    return 0;
}

