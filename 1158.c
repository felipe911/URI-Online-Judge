/* URI Online Judge | 1158
Soma de �mpares Consecutivos III
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia um valor inteiro N que � a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste de dois inteiros X e Y.
Voc� deve apresentar a soma de Y �mpares consecutivos a partir de X inclusive o pr�prio X se ele for �mpar. Por exemplo:
para a entrada 4 5, a sa�da deve ser 45, que � equivalente �: 5 + 7 + 9 + 11 + 13
para a entrada 7 4, a sa�da deve ser 40, que � equivalente �: 7 + 9 + 11 + 13

Entrada

A primeira linha de entrada � um inteiro N que � a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste em uma linha contendo
dois inteiros X e Y.

Sa�da

Imprima a soma dos consecutivos n�meros �mpares a partir do valor X. */


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
