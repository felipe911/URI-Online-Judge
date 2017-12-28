/* URI Online Judge | 1060
Números Positivos
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos
(desconsidere os valores nulos). A seguir, mostre a quantidade de valores positivos
digitados.

Entrada
Seis valores, negativos e/ou positivos.

Saída
Imprima uma mensagem dizendo quantos valores positivos foram lidos. */

#include<stdio.h>

int main(){
    float val[6];
    int c, positivo;

    positivo = 0;
    for(c=0; c<6; c++){
        scanf("%f", &val[c]);
        if(val[c] > 0){
            positivo++;
        }
    }
    printf("%d valores positivos\n", positivo);

    return 0;
}