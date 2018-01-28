/* URI Online Judge | 1175
Troca em Vetor I
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Faça um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o último, o segundo elemento com o penúltimo, etc., até
trocar o 10º com o 11º. Mostre o vetor modificado.

Entrada
A entrada contém 20 valores inteiros, positivos ou negativos.

Saída
Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do vetor e Y é o valor armazenado naquela posição. */

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

