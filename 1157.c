/* URI Online Judge | 1157
Divisores I
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Ler um n�mero inteiro N e calcular todos os seus divisores.

Entrada

O arquivo de entrada cont�m um valor inteiro.

Sa�da

Escreva todos os divisores positivos de N, um valor por linha. */

#include <stdlib.h>
#include <stdio.h>

int main(){

    int n, i;

    scanf("%d", &n);
    for(i=1; i <= n; i++){

        if(n % i == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}
