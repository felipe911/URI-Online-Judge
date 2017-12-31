/* URI Online Judge | 1101
Sequência de Números e Soma
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Leia um conjunto não determinado de pares de valores M e N (parar quando algum dos valores for menor ou
igual a zero). Para cada par lido, mostre a sequência do menor até o maior e a soma dos inteiros
consecutivos entre eles (incluindo o N e M).

Entrada
O arquivo de entrada contém um número não determinado de valores M e N. A última linha de entrada vai
conter um número nulo ou negativo.

Saída
Para cada dupla de valores, imprima a sequência do menor até o maior e a soma deles, conforme exemplo
abaixo. */

#include <stdio.h>

int main(){

    int M, N, c, k=0;

    scanf("%d%d", &M, &N);
    while(M>0 && N>0){
        if(M > N){
                for(c=N;c<=M;c++){
                    printf("%d ",c);
                    k = k + c;
                }
                printf("Sum=%d\n", k);
                k = 0;
            }
        if(N > M){
                for(c=M;c<=N;c++){
                    printf("%d ",c);
                    k = k + c;
                }
                printf("Sum=%d\n", k);
                k = 0;
            }
        scanf("%d%d", &M, &N);
    }
    return 0;
}