/* URI Online Judge | 1165
Número Primo
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Na matemática, um Número Primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo. Por exemplo, o número 7 é primo, pois pode ser
dividido apenas pelo número 1 e pelo número 7.

Entrada

A entrada contém vários casos de teste. A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 100), indicando o número de casos de teste da entrada.
Cada uma das N linhas seguintes contém um valor inteiro X (1 < X ≤ 107), que pode ser ou não, um número primo.

Saída

Para cada caso de teste de entrada, imprima a mensagem “X eh primo” ou “X nao eh primo”, de acordo com a especificação fornecida. */


#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, casos, x = 0, div;

    scanf("%d", &casos);

    while(x < casos){
        scanf("%d", &n);

        for(i = 1; i <= n; i++){
            if(n % i == 0){
                div++;
            }
        }
        if(div <= 2){
            printf("%d eh primo\n", n);
        }
        else{
            printf("%d nao eh primo\n", n);
        }
        div = 0;
        x++;
    }
    return 0;
}
