/* URI Online Judge | 1158
Soma de Ímpares Consecutivos III
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste de dois inteiros X e Y.
Você deve apresentar a soma de Y ímpares consecutivos a partir de X inclusive o próprio X se ele for ímpar. Por exemplo:
para a entrada 4 5, a saída deve ser 45, que é equivalente à: 5 + 7 + 9 + 11 + 13
para a entrada 7 4, a saída deve ser 40, que é equivalente à: 7 + 9 + 11 + 13

Entrada

A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste em uma linha contendo
dois inteiros X e Y.

Saída

Imprima a soma dos consecutivos números ímpares a partir do valor X. */


#include <stdio.h>

int main(){

    int n, x, y, i, inicio, j = 0, k;
    scanf("%d", &n);

    for(i=0; i < n; i++){

        scanf("%d %d", &x, &y);

        if(x % 2 == 0){
            inicio = x + 1;

            for(k = 0; k < y; k++){
                j+= inicio;
                inicio+= 2;
            }
            printf("%d\n", j);
            inicio = 0; j = 0;
        }

        else{
            inicio = x;
            for(k = 0; k < y; k++){
                    j+= inicio;
                    inicio+= 2;
                }
                printf("%d\n", j);
                inicio = 0; j = 0;
        }
    }
    return 0;
}
