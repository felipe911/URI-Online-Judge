/* URI Online Judge | 1073
Quadrado de Pares
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N,
inclusive N, se for o caso.

Entrada
A entrada contém um valor inteiro N (5 < N < 2000).

Saída
Imprima o quadrado de cada um dos valores pares, de 1 até N, conforme o exemplo abaixo.

Tome cuidado! Algumas linguagens tem por padrão apresentarem como saída 1e+006 ao invés de
1000000 o que ocasionará resposta errada. Neste caso, configure a precisão adequadamente para
que isso não ocorra. */

#include<stdio.h>

int main(){
    long int c, N;

    scanf("%ld", &N);

    for(c=2; c<=N ;c = c + 2)

        printf("%ld^2 = %ld\n",c,c*c);

    return 0;
}