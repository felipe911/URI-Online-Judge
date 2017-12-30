/* URI Online Judge | 1080
Maior e Posição
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores
lidos.

Entrada
O arquivo de entrada contém 100 números inteiros, positivos e distintos.

Saída
Apresente o maior valor lido e a posição de entrada, conforme exemplo abaixo. */

#include <stdio.h>

int main(){
    int val[100], c, maior, posicao;

    maior = 0;
    for(c=0; c<100; c++){
        scanf("%d", &val[c]);
        if(val[c] > maior)
        {
            maior = val[c];
            posicao = c + 1;
        }

    }

    printf("%d\n", maior);
    printf("%d\n", posicao);
    return 0;
}