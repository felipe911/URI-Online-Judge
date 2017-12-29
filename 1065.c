/* URI Online Judge | 1065
Pares entre Cinco Números
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são pares
e mostre esta informação.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, indicando a quantidade de valores pares lidos. */

#include <stdio.h>

int main(){
    int val[5], pares, c;

    pares = 0;
    for(c=0; c<5; c++){
    scanf("%d", &val[c]);

        if(val[c] % 2 == 0){
            pares = pares + 1;
        }
    }
    printf("%d valores pares\n", pares);

    return 0;
}