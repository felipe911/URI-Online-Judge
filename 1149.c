/*URI Online Judge | 1149
Somando Inteiros Consecutivos
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Faça um algoritmo para ler um valor A e um valor N. Imprimir a soma de A para cada i com os valores (0 <= i <= N-1).
Enquanto N for negativo ou ZERO, um novo N(apenas N) deve ser lido.

Entrada

A entrada contém somente valores inteiros, podendo ser positivos ou negativos. Todos os valores estão na mesma linha.

Saída

A saída contém apenas um valor inteiro. */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main (){

    int a, n, j = 0, i;

    scanf("%d %d", &a, &n);

    while(n < 0 || n == 0){
        scanf("%d", &n);
    }
    for(i=0; i < n; i++){
        j+= + a + i;
    }
    printf("%d\n", j);
    return 0;
}
