/* URI Online Judge | 1159
Soma de Pares Consecutivos
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
O programa deve ler um valor inteiro X indefinidas vezes. (O programa irá parar quando o valor de X for igual a 0). Para cada X lido,
imprima a soma dos 5 pares consecutivos a partir de X, inclusive o X , se for par. Se o valor de entrada for 4, por exemplo, a saída deve ser 40,
que é o resultado da operação: 4+6+8+10+12, enquanto que se o valor de entrada for 11, por exempo, a saída deve ser 80, que é a soma de 12+14+16+18+20.

Entrada
O arquivo de entrada contém muitos valores inteiros. O último valor do arquivo é zero.

Saída
Imprima a saida conforme a explicação acima e o exemplo abaixo. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, i, k = 0, inicio;

    scanf("%d", &x);

    while(x != 0){

        if(x % 2 == 0){
            inicio = x;

            for(i=0 ; i < 5; i++){
                k+= inicio;
                inicio+= 2;
            }
            printf("%d\n", k);
            k = 0;

        }
        else {
            inicio = x + 1;

            for(i=0 ; i < 5; i++){
                k+= inicio;
                inicio+= 2;
            }
            printf("%d\n", k);
            k = 0;

        }
        scanf("%d", &x);
    }

    return 0;
}
