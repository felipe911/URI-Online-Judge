/* URI Online Judge | 1078
Tabuada
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Leia 1 valor inteiro N (2 < N < 1000). A seguir, mostre a tabuada de N:      
1 x N = N      2 x N = 2N        ...       10 x N = 10N

Entrada
A entrada contém um valor inteiro N (2 < N < 1000).

Saída
Imprima a tabuada de N, conforme o exemplo fornecido. */

#include <stdio.h>

int main(){

    int n, c, val;

    scanf("%d", &n);
    for(c=1; c<= 10; c++){
            val = c * n;
        printf("%d x %d = %d\n", c, n, val);

    }

    return 0;
}