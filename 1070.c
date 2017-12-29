/* URI Online Judge | 1070
Seis Números Ímpares
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Leia um valor inteiro X. Em seguida apresente os 6 valores ímpares consecutivos a partir de X,
um valor por linha, inclusive o X ser for o caso.

Entrada
A entrada será um valor inteiro positivo.

Saída
A saída será uma sequência de seis números ímpares. */

#include <stdio.h>

int main(){
    int X, c, b;

    scanf("%d", &X);

    for(c=0; c < 6; c++){
        if(X % 2 != 0){
            X = X +2;
            printf("%d\n", X);
        }
        else{
            X = X + 1;
            printf("%d\n", X);
        }
    }
    return 0;
}