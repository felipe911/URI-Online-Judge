/* URI Online Judge | 1067
Números Ímpares
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Leia um valor inteiro X (1 <= X <= 1000). Em seguida mostre os ímpares de 1 até X, um valor por
linha, inclusive o X, se for o caso.

Entrada
O arquivo de entrada contém 1 valor inteiro qualquer.

Saída
Imprima todos os valores ímpares de 1 até X, inclusive X, se for o caso. */

#include <stdio.h>

int main(){
    int X, c ;

    scanf("%d", &X);

    for(c=0; c <= X; c++){

    if(c % 2 != 0){
        printf("%d\n", c);
    }
    }

    return 0;
}