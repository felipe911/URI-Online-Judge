/* URI Online Judge | 1075
Resto 2
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Leia um valor inteiro N. Apresente todos os números entre 1 e 10000 que divididos por N dão resto
igual a 2.

Entrada
A entrada contém um valor inteiro N (N < 10000).

Saída
Imprima todos valores que quando divididos por N dão resto = 2, um por linha. */

#include <stdio.h>

int main(){
    int n, c;

    scanf("%d", &n);

    for(c=1; c<=10000; c++){
        if(c % n == 2){
            printf("%d\n", c);
        }
    }

    return 0;
}