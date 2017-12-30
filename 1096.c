/* URI Online Judge | 1096
Sequencia IJ 2
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada
Não há nenhuma entrada neste problema.

Saída
Imprima a sequencia conforme exemplo abaixo */

#include <stdio.h>

int main(){
    int i;

    for(i=1 ; i <=9; i=i+2){
        printf("I=%d J=7\n", i);
        printf("I=%d J=6\n", i);
        printf("I=%d J=5\n", i);

    }
    return 0;
}