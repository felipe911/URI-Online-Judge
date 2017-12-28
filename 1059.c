/* URI Online Judge | 1059
Números Pares
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Faça um programa que mostre os números pares entre 1 e 100, inclusive.

Entrada
Neste problema extremamente simples de repetição não há entrada.

Saída
Imprima todos os números pares entre 1 e 100, inclusive se for o caso, um em cada linha. */

#include<stdio.h>

int main(){

    int c;

    for(c=1; c<101; c++){
        if((c % 2) == 0){
        printf("%d\n", c);
    }
    }
    return 0;
}