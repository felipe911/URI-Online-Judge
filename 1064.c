/* URI Online Judge | 1064
Positivos e Média
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos.
Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito
após o ponto decimal.

Entrada
A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante. Pelo menos um
destes números será positivo.

Saída
O primeiro valor de saída é a quantidade de valores positivos. A próxima linha deve mostrar a
média dos valores positivos digitados. */

#include<stdio.h>

int main(){

    float valores[6], media;
    int c, nValores;

    media = 0;
    nValores = 0;
    for(c=0 ; c<6; c++){
        scanf("%f", &valores[c]);
        if(valores[c] > 0){
            nValores = nValores + 1;
            media = media + valores[c];
        }

    }

    printf("%d valores positivos\n", nValores);
    printf("%.1f\n", media / nValores);

    return 0;
}