/* URI Online Judge | 1097
Sequencia IJ 3
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada
Não há nenhuma entrada neste problema.

Saída
Imprima a sequencia conforme exemplo abaixo. */

#include <stdio.h>
 
int main() {
 
    int lin,col,i,j;
    lin = 1;
    col = 7;
    for(i=0;i<5;i++){
        for(j=0; j<3;j++){
            printf("I=%d J=%d\n", lin, col);
            col = col - 1;
        }
        lin = lin + 2;
        col = col + 5;
    }
 
    return 0;
}